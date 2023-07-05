#include "MyForm.h"
#include <iostream>
#include <cmath>
#include <vector>
#define beta 0.5
#define alfa 1
#define gamma 3
#define T 1
#define eps 0.001
using namespace std;

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(cli::array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    NelderMid::MyForm form;
    Application::Run(% form);
}


struct Graph { //Структура, сохраняющая данные для вывода в таблицу
    double X[3][2];
    int I = 0;
    double E;
    double K[2][2];
    double XR[3][2];
};

vector<Graph> G;

int q, m, m1, w = 0, H, L;
double P[3][2], F[3];

double NelderMid::MyForm::f(double x1, double x2) //Находение значения функции в конкретной точке
{
    return q * (4 * cos(x1 + 1) + 3 * sin(x2 - 1)) * exp((-pow(x1, 2) - pow(x2, 2) - 1) / 4);
}

void NelderMid::MyForm::SAF()
{
    for (int j = 0; j < 3; j++)//Расчет значений функции в вершина многогранника
    {
        F[j] = f(P[j][0], P[j][1]);
    }
    H = 0;
    L = 0;
    for (int j = 0; j < 3; j++)//поиск H и L - индексов вершин с макс. и мин. значениями функции
    {
        if (F[j] > F[H])
        {
            H = j;
        }
        if (F[j] < F[L])
        {
            L = j;
        }
    }
}

double NelderMid::MyForm::FindC(double C[])
{
    for (int i = 0; i < 2; i++)//Поиск С - ценр тяжести всех вершин за исключением Pн
    {
        double SumP = 0;
        for (int j = 0; j < 3; j++)
        {
            SumP = SumP + P[j][i];
        }
        C[i] = (1.0 / 2) * (SumP - P[H][i]);
    }
    return f(C[0], C[1]);
}

double NelderMid::MyForm::MNK(double fc)
{
    double Fsum = 0;
    for (int j = 0; j < 3; j++)//Проверка на завершение
    {
        Fsum = Fsum + pow(F[j] - fc, 2);
    }
    return sqrt((1.0 / (3)) * Fsum);
}

double NelderMid::MyForm::Reflect(double R[2], double C[2])
{
    for (int i = 0; i < 2; i++)//Отражение вершины
    {
        R[i] = C[i] + alfa * (C[i] - P[H][i]);
    }
    return f(R[0], R[1]);
}

void NelderMid::MyForm::Stretching(double C[], double R[], double E[])
{
    for (int i = 0; i < 2; i++)//Отражение оказалось эффективным, 
        //приступаем к растяжению
    {
        E[i] = C[i] + gamma * (R[i] - C[i]);
    }
    if (f(E[0], E[1]) < f(R[0], R[1]))//Проверка растяжения
    {
        for (int i = 0; i < 2; i++)
        {
            P[H][i] = E[i];
            G.at(m - 1).K[1][i] = E[i];
        }
        G.at(m - 1).I = 2;
    }
    else
    {
        for (int i = 0; i < 2; i++)
        {
            P[H][i] = R[i];
            G.at(m - 1).K[1][i] = R[i];
        }
        G.at(m - 1).I = 1;
    }
}

int NelderMid::MyForm::ReflectionRight(double FR)
{
    for (int i = 0; i < 3; i++)//Проверка
    {
        if (i != H)
        {
            if (FR < F[i])
                return 0;
        }
    }
    return 1;
}

void NelderMid::MyForm::Substitution(double FR, double R[])
{
    if (FR < F[H])
    {
        for (int i = 0; i < 2; i++)
        {
            P[H][i] = R[i];
            G.at(m - 1).K[1][i] = R[i];
        }
        G.at(m - 1).I = 1;
    }
}

void NelderMid::MyForm::CANDR(double S[], double C[])
{
    for (int i = 0; i <= 1; i++)//Сжатие
        S[i] = C[i] + beta * (P[H][i] - C[i]);
    if (f(S[0], S[1]) < F[H])//Проверка
    {
        for (int i = 0; i < 2; i++)//Сжатие оказалось эффективным, использем его. Замещение вершины
        {
            P[H][i] = S[i];
            G.at(m - 1).K[1][i] = S[i];
        }
        G.at(m - 1).I = 3;
    }
    else
    {//Сжатие оказалось неэффективным, приступаем к редукции. Перерасчет вершин.
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if (i != L)
                {
                    P[i][j] = P[L][j] + 0.5 * (P[i][j] - P[L][j]);
                    G.at(m - 1).XR[i][j] = P[i][j];
                }
            }
        }
        G.at(m - 1).XR[L][0] = P[L][0];
        G.at(m - 1).XR[L][1] = P[L][1];
        G.at(m - 1).I = 4;
    }
}


void NelderMid::MyForm::Compression(double R[])
{
    for (int i = 0; i <= 1; i++)
    {
        {
            P[H][i] = R[i];
            G.at(m - 1).K[1][i] = R[i];
        }
        G.at(m - 1).I = 1;
    }
}

int NelderMid::MyForm::Simplex(int D) //Считывание информации о 
//начальном симплексе из формы
{
    P[0][0] = Convert::ToDouble(A1X1->Value);
    P[0][1] = Convert::ToDouble(A1X2->Value);
    P[1][0] = Convert::ToDouble(A2X1->Value);
    P[1][1] = Convert::ToDouble(A2X2->Value);
    P[2][0] = Convert::ToDouble(A3X1->Value);
    P[2][1] = Convert::ToDouble(A3X2->Value);
    if (P[0][0] == P[1][0] && P[0][1] == P[1][1] ||
        P[0][0] == P[2][0] && P[0][1] == P[2][1] ||
        P[0][0] == P[3][0] && P[0][1] == P[3][1] ||
        P[1][0] == P[2][0] && P[1][1] == P[2][1])
    {
        D = 0;
        MessageBox::Show(this, "Две или более начальных точек совпадают! Измените начальное приближение!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    return D;
}

void NelderMid::MyForm::End(double fc)
{
    textBox2->Clear();
    textBox2->Text = Convert::ToString(1);
    m1 = 0;
    dataGridView1->Rows->Clear();
    for (int i = 0; i < 2 * m; i++)
    {
        dataGridView1->Rows->Add();
        dataGridView1->Rows[i]->Height = 20;
    }
    int j = 0;
    for (int i = 0; i < 2 * m; i++)
    {
        if (i % 2 == 0)
        {
            dataGridView1[0, i]->Value = j + 1;
            dataGridView1[1, i]->Value = G.at(j).X[0][0];
            dataGridView1[2, i]->Value = G.at(j).X[1][0];
            dataGridView1[3, i]->Value = G.at(j).X[2][0];
            dataGridView1[4, i]->Value = q * f(G.at(j).X[0][0], G.at(j).X[0][1]);
            dataGridView1[5, i]->Value = q * f(G.at(j).X[1][0], G.at(j).X[1][1]);
            dataGridView1[6, i]->Value = q * f(G.at(j).X[2][0], G.at(j).X[2][1]);
            switch (G.at(j).I)
            {
            case 1:
                dataGridView1[7, i]->Value = "Отражение";
                break;
            case 2:
                dataGridView1[7, i]->Value = "Растяжение";
                break;
            case 3:
                dataGridView1[7, i]->Value = "Сжатие";
                break;
            case 4:
                dataGridView1[7, i]->Value = "Редукция";
                break;
            }

            j++;
        }
        else
        {
            j--;
            dataGridView1[1, i]->Value = G.at(j).X[0][1];
            dataGridView1[2, i]->Value = G.at(j).X[1][1];
            dataGridView1[3, i]->Value = G.at(j).X[2][1];
            j++;
        }
    }
    dataGridView1->RowHeadersVisible = false;
    dataGridView1->ClearSelection();
    button2->Enabled = true;
    w = 0;
    for (int i = w; i < w + 2; i++)
        for (int j = 0; j < 8; j++)
            dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::Yellow;
    ZMNK->Text = Convert::ToString(G.at(0).E);
    BS->Text = ">";
    this->chart->Series[0]->Points->Clear();
    this->chart->Series[1]->Points->Clear();
    this->chart->Series[0]->Points->AddXY(G.at(0).X[0][0], G.at(0).X[0][1]);
    this->chart->Series[0]->Points->AddXY(G.at(0).X[1][0], G.at(0).X[1][1]);
    this->chart->Series[0]->Points->AddXY(G.at(0).X[2][0], G.at(0).X[2][1]);
    this->chart->Series[0]->Points->AddXY(G.at(0).X[0][0], G.at(0).X[0][1]);
    if (G.at(0).I == 4)
    {
        this->chart->Series[1]->Points->AddXY(G.at(0).XR[0][0], G.at(0).XR[0][1]);
        this->chart->Series[1]->Points->AddXY(G.at(0).XR[1][0], G.at(0).XR[1][1]);
        this->chart->Series[1]->Points->AddXY(G.at(0).XR[2][0], G.at(0).XR[2][1]);
        this->chart->Series[1]->Points->AddXY(G.at(0).XR[0][0], G.at(0).XR[0][1]);
    }
    else
    {
        this->chart->Series[1]->Points->AddXY(G.at(0).K[0][0], G.at(0).K[0][1]);
        this->chart->Series[1]->Points->AddXY(G.at(0).K[1][0], G.at(0).K[1][1]);
    }
}

System::Void NelderMid::MyForm::APPLY_Click(System::Object^ sender, System::EventArgs^ e)
{
    int D = 1;
    double fc, C[2], FR, z, S[2], R[2], E[2];
    m = 0;
    switch (comboBox1->SelectedIndex)
    {
    case 0:
        q = 1;
        break;
    case 1:
        q = -1;
        break;
    default:
        q = 1;
    }
    D = Simplex(D);
    if (D == 1)
    {
        while (1)
        {
            SAF();
            fc = FindC(C);
            z = MNK(fc);
            m = m + 1;
            G.resize(m);
            G.at(m - 1).E = z;
            for (int i = 0; i < 3; i++)
                for (int j = 0; j < 2; j++)
                    G.at(m - 1).X[i][j] = P[i][j];
            if (z <= eps)
            {
                break;
            }
            else
            {
                G.at(m - 1).K[0][0] = P[H][0];
                G.at(m - 1).K[0][1] = P[H][1];
                FR = Reflect(R, C);
                if (FR < F[L])//Проверка отражения
                    Stretching(C, R, E);//Отражение оказалось эффективным, приступаем к растяжению
                else// если НЕТ
                {
                    int s = ReflectionRight(FR);
                    if (s)
                    {//Отражение оказалось неэффективным, приступаем к сжатию
                        Substitution(FR, R);
                        CANDR(S, C);
                    }
                    else
                    {
                        Compression(R);
                    }
                    
                }
            }
        }
        End(fc);
    }
}

System::Void NelderMid::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (m1 - 1 >= 0)
    {

        button2->Enabled = true;
        if (m1 - 1 == 0)
        {
            button1->Enabled = false;
        }
        for (int i = w; i < w + 2; i++)
            for (int j = 0; j < 8; j++)
                dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::Empty;
        w = w - 2;
        for (int i = w; i < w + 2; i++)
            for (int j = 0; j < 8; j++)
                dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::Yellow;
        m1 -= 1;
        ZMNK->Text = Convert::ToString(G.at(m1).E);
        if (G.at(m1).E < eps)
            BS->Text = "<";
        else
            BS->Text = ">";
        textBox2->Text = Convert::ToString(m1 + 1);
        this->chart->Series[0]->Points->Clear();
        this->chart->Series[1]->Points->Clear();
        this->chart->Series[0]->Points->AddXY(G.at(m1).X[0][0], G.at(m1).X[0][1]);
        this->chart->Series[0]->Points->AddXY(G.at(m1).X[1][0], G.at(m1).X[1][1]);
        this->chart->Series[0]->Points->AddXY(G.at(m1).X[2][0], G.at(m1).X[2][1]);
        this->chart->Series[0]->Points->AddXY(G.at(m1).X[0][0], G.at(m1).X[0][1]);
        if (G.at(m1).I == 4)
        {
            this->chart->Series[1]->Points->AddXY(G.at(m1).XR[0][0], G.at(m1).XR[0][1]);
            this->chart->Series[1]->Points->AddXY(G.at(m1).XR[1][0], G.at(m1).XR[1][1]);
            this->chart->Series[1]->Points->AddXY(G.at(m1).XR[2][0], G.at(m1).XR[2][1]);
            this->chart->Series[1]->Points->AddXY(G.at(m1).XR[0][0], G.at(m1).XR[0][1]);
        }
        else
        {
            this->chart->Series[1]->Points->AddXY(G.at(m1).K[0][0], G.at(m1).K[0][1]);
            this->chart->Series[1]->Points->AddXY(G.at(m1).K[1][0], G.at(m1).K[1][1]);
        }
    }
}

System::Void NelderMid::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (m1 + 1 < m)
    {
        if (m1 + 1 == m - 1)
        {
            button2->Enabled = false;
        }
        m1 += 1;
        ZMNK->Text = Convert::ToString(G.at(m1).E);
        if (G.at(m1).E < eps)
            BS->Text = "<";
        else
            BS->Text = ">";
        for (int i = w; i < w + 2; i++)
            for (int j = 0; j < 8; j++)
                dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::Empty;
        w = w + 2;
        for (int i = w; i < w + 2; i++)
            for (int j = 0; j < 8; j++)
                dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::Yellow;
        button1->Enabled = true;
        textBox2->Text = Convert::ToString(m1 + 1);
        this->chart->Series[0]->Points->Clear();
        this->chart->Series[1]->Points->Clear();
        this->chart->Series[0]->Points->AddXY(G.at(m1).X[0][0], G.at(m1).X[0][1]);
        this->chart->Series[0]->Points->AddXY(G.at(m1).X[1][0], G.at(m1).X[1][1]);
        this->chart->Series[0]->Points->AddXY(G.at(m1).X[2][0], G.at(m1).X[2][1]);
        this->chart->Series[0]->Points->AddXY(G.at(m1).X[0][0], G.at(m1).X[0][1]);
        if (G.at(m1).I == 4)
        {
            this->chart->Series[1]->Points->AddXY(G.at(m1).XR[0][0], G.at(m1).XR[0][1]);
            this->chart->Series[1]->Points->AddXY(G.at(m1).XR[1][0], G.at(m1).XR[1][1]);
            this->chart->Series[1]->Points->AddXY(G.at(m1).XR[2][0], G.at(m1).XR[2][1]);
            this->chart->Series[1]->Points->AddXY(G.at(m1).XR[0][0], G.at(m1).XR[0][1]);
        }
        else
        {
            this->chart->Series[1]->Points->AddXY(G.at(m1).K[0][0], G.at(m1).K[0][1]);
            this->chart->Series[1]->Points->AddXY(G.at(m1).K[1][0], G.at(m1).K[1][1]);
        }

    }
    else
        button2->Enabled = false;
}

System::Void NelderMid::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    button1->Enabled = false;
    button2->Enabled = false;
}
