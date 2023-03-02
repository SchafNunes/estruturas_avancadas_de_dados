#include <iostream>

using namespace std;

int tabuleiro[9][9] = {
    {7, 0, 2, 0, 5, 0, 6, 0, 0},
    {0, 0, 0, 0, 0, 3, 0, 0, 0},
    {1, 0, 0, 0, 0, 9, 5, 0, 0},
    {8, 0, 0, 0, 0, 0, 0, 9, 0},
    {0, 4, 3, 0, 0, 0, 7, 5, 0},
    {0, 9, 0, 0, 0, 0, 0, 0, 8},
    {0, 0, 9, 7, 0, 0, 0, 0, 5},
    {0, 0, 0, 2, 0, 0, 0, 0, 0},
    {0, 0, 7, 0, 4, 0, 2, 0, 3}
};


bool validaColuna(int linha, int num)
{
  bool achei = 0;

  for (int j = 0; j < 9; j++)
  {
    if (tabuleiro[linha][j] == num)
    {
      achei = 1;
      break;
    }

  }
  return achei;
}

bool validaLinha(int coluna, int num)
{
  bool achei = 0;

  for (int i = 0; i < 9; i++)
  {
    if (tabuleiro[i][coluna] == num)
    {
      achei = 1;
      break;
    }
  }
    return achei;
}

// bool validaQuadrante(int coluna, int num)
// {
//   for (int i = 0; i < 9; i++)
//   {
//     if (tabuleiro[i][coluna] == num)
//     {
//       return false;
//       break;
//     }
//   }
// }



int
main()
{
  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 9; j++)
    {
      cout << tabuleiro[i][j] << ' ' ;
    }
    cout << endl;
  }
  cout << endl;

  for (int i = 1; i < 9; i++)
  {
    for (int j = 8; j < 9; j++)
    {
      if (tabuleiro[i][j] == 0)
      {
        for (int k = 1; k <= 9; k++)
        {
          if (validaColuna(i, k) == 0 && validaLinha(j, k) == 0) 
          {
            tabuleiro[i][j] = k;
            k = 15;
          }
        }
      }
    }
  }

  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 9; j++)
    {
      cout << tabuleiro[i][j] << ' ' ;
    }
    cout << endl;
  }
}