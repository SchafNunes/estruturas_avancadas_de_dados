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
    {0, 0, 7, 0, 4, 0, 2, 0, 3}};

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

bool buscaQuadrante(int linhaCentral, int colunaCentral, int num)
{
  for (int i = linhaCentral - 1; i <= linhaCentral + 1; i++)
  {
    for (int j = colunaCentral - 1; j <= colunaCentral + 1; j++)
    {
      if (tabuleiro[i][j] == num)
      {
        return true;
      }
    }
  }
  return false;
}

bool validaQuadrante(int linha, int coluna, int num)
{
  if (linha <= 2 && coluna <= 2)
  {
    if (buscaQuadrante(1, 1, num))
    {
      return false;
    }
    else
    {
      return true;
    }
  }
  else if (linha <= 2 && coluna <= 5)
  {
    if (buscaQuadrante(1, 4, num))
    {
      return false;
    }
    else
    {
      return true;
    }
  }
  else if (linha <= 2 && coluna <= 8)
  {
    if (buscaQuadrante(1, 7, num))
    {
      return false;
    }
    else
    {
      return true;
    }
  }
  else if (linha <= 5 && coluna <= 2)
  {
    if (buscaQuadrante(4, 1, num))
    {
      return false;
    }
    else
    {
      return true;
    }
  }
  else if (linha <= 5 && coluna <= 5)
  {
    if (buscaQuadrante(4, 4, num))
    {
      return false;
    }
    else
    {
      return true;
    }
  }
  else if (linha <= 5 && coluna <= 8)
  {
    if (buscaQuadrante(4, 7, num))
    {
      return false;
    }
    else
    {
      return true;
    }
  }
  else if (linha <= 8 && coluna <= 2)
  {
    if (buscaQuadrante(7, 1, num))
    {
      return false;
    }
    else
    {
      return true;
    }
  }
  else if (linha <= 8 && coluna <= 5)
  {
    if (buscaQuadrante(7, 4, num))
    {
      return false;
    }
    else
    {
      return true;
    }
  }
  else if (linha <= 8 && coluna <= 8)
  {
    if (buscaQuadrante(7, 7, num))
    {
      return false;
    }
    else
    {
      return true;
    }
  }
}

int main()
{

  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 9; j++)
    {
      cout << tabuleiro[i][j] << ' ';
    }
    cout << endl;
  }
  cout << endl;

  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 9; j++)
    {
      if (tabuleiro[i][j] == 0)
      {
        for (int k = 1; k <= 9; k++)
        {
          if (validaColuna(i, k) == 0 &&  validaLinha(j, k) == 0 && validaQuadrante(i, j, k) == true   )
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
      cout << tabuleiro[i][j] << ' ';
    }
    cout << endl;
  }
}