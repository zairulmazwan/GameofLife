#pragma once
#include "stdafx.h"
#include "Form1.h"

using namespace std;
//using namespace System;
//using namespace System::ComponentModel;
//using namespace System::Collections;
//using namespace System::Windows::Forms;
//using namespace System::Data;
//using namespace System::Drawing;

void clearButton(cli::array<System::Windows::Forms::Button^, 2>^ b, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			b[i, j]->Text = System::Convert::ToString("");
			b[i, j]->BackColor = System::Drawing::SystemColors::ControlLight;
			

		}
	}

}
void clearArray(cli::array<int, 2>^ arrayBoard, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			arrayBoard[i, j] = 0;
		}
	}

}

void moveOneStep(cli::array<System::Windows::Forms::Button^, 2>^ b, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
					
			if (b[i, j]->BackColor == System::Drawing::SystemColors::MenuText)
			{
				b[i, j]->Text = System::Convert::ToString("");
				b[i, j]->BackColor = System::Drawing::SystemColors::ControlLight;
				
			}
			else
			{
				b[i, j]->BackColor = System::Drawing::SystemColors::MenuText;
			}
			
		}
	}

}

void checkLife(cli::array<System::Windows::Forms::Button^, 2>^ b, int size)
{
	array<int, 2>^ arrayBoard = gcnew array<int, 2>(size, size);
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			int alive = 0;
			for (int c = -1; c < 2; c++)
			{
				for (int d = -1; d < 2; d++)
				{
					int x = i + c;
					int y = j + d;

					if (!(c == 0 && d == 0))
					{
						if (x < 0)
						{
							x = 19;
						}

						if (y > size - 1)
						{
							y = 0;
						}

						if (y < 0)
						{
							y = 19;
						}

						if (x > size - 1)
						{
							x = 0;
						}

						if (b[x, y]->BackColor == System::Drawing::SystemColors::Highlight)
						{
							alive++;
						}
					}
						
				}
			}

			if ((alive == 2 || alive == 3)&&(b[i, j]->BackColor == System::Drawing::SystemColors::Highlight))
			{
				//b[i, j]->BackColor = System::Drawing::SystemColors::Highlight;
				arrayBoard[i, j] = 1;
				
			}
			else if((alive<2)&& (b[i, j]->BackColor == System::Drawing::SystemColors::ControlLight))
			{
				//b[i, j]->BackColor = System::Drawing::SystemColors::ControlLight;
				arrayBoard[i, j] = 0;
				
			}
			else if ((alive > 3) && (b[i, j]->BackColor == System::Drawing::SystemColors::ControlLight))
			{
				//b[i, j]->BackColor = System::Drawing::SystemColors::ControlLight;
				arrayBoard[i, j] = 0;
			}
			else if ((alive == 3) && (b[i, j]->BackColor == System::Drawing::SystemColors::ControlLight))
			{
				//b[i, j]->BackColor = System::Drawing::SystemColors::ControlLight;
				arrayBoard[i, j] = 1;
			}
			else
			{
				arrayBoard[i, j] = 0;
			}

		}
	}

	for (int i=0; i<size; i++)
	{
		for (int j=0; j<size; j++)
		{
			if (arrayBoard[i, j] == 1)
			{
				b[i, j]->BackColor = System::Drawing::SystemColors::Highlight;
			}
			else
			{
				b[i, j]->BackColor = System::Drawing::SystemColors::ControlLight;
			}
		}
	}
}



void arrayClick(System::Object^  sender, System::EventArgs^  e)
{
	System::Windows::Forms::Button^ bttnsArray = gcnew System::Windows::Forms::Button();
	bttnsArray->BackColor == System::Drawing::SystemColors::MenuText;
}