#pragma once

namespace LineupManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Button^  LCB;
	private: System::Windows::Forms::Button^  RCB;
	private: System::Windows::Forms::Button^  CB;
	private: System::Windows::Forms::Button^  LB;
	private: System::Windows::Forms::Button^  RightBack;
	private: System::Windows::Forms::Label^  Positions;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  CDM;
	private: System::Windows::Forms::Button^  CM;
	private: System::Windows::Forms::Button^  CAM;
	private: System::Windows::Forms::Button^  LM;
	private: System::Windows::Forms::Button^  RightMid;
	private: System::Windows::Forms::Button^  ST;
	private: System::Windows::Forms::Button^  RST;
	private: System::Windows::Forms::Button^  LST;
	private: System::Windows::Forms::Button^  LW;
	private: System::Windows::Forms::Button^  RW;
	private: System::Windows::Forms::Button^  GK;
	private: System::Windows::Forms::Button^  VKompany;
	private: System::Windows::Forms::Button^  KWalker;
	private: System::Windows::Forms::Button^  OZinchenko;
	private: System::Windows::Forms::Button^  BSilva;
	private: System::Windows::Forms::Button^  CBravo;
	private: System::Windows::Forms::Button^  GJesus;





	public:
		//used to hold current selected player
		String^ selected;

		//Resets players back to bench
		void Reset()
		{
			BMendy->Location = Point(472, 80);
			IGundagon->Location = Point(604, 212);
			JStones->Location = Point(472, 146);
			SAguero->Location = Point(472, 212);
			ALaporte->Location = Point(472, 278);
			LSane->Location = Point(538, 278);
			NOtammendi->Location = Point(604, 80);
			Rsterling->Location = Point(604, 146);
			DSilva->Location = Point(604, 278);
			KDebruyne->Location = Point(538, 80);
			Fernandinho->Location = Point(538, 212);
			Ederson->Location = Point(538, 146);
			VKompany->Location = Point(472, 344);
			KWalker->Location = Point(538, 344);
			OZinchenko->Location = Point(604, 344);
			BSilva->Location = Point(472, 410);
			CBravo->Location = Point(538, 410);
			GJesus->Location = Point(604, 410);
		}
		//function that detects current5 selected player and then moves it up 10 px
		void SelectedPlayerUp()
		{
			if (selected == "BMendy")
			{
				BMendy->Top -= 10;
			}
			else if (selected == "IGundagon")
			{
				IGundagon->Top -= 10;
			}
			else if (selected == "JStones")
			{
				JStones->Top -= 10;
			}
			else if (selected == "SAguero")
			{
				SAguero->Top -= 10;
			}
			else if (selected == "ALaporte")
			{
				ALaporte->Top -= 10;
			}
			else if (selected == "LSane")
			{
				LSane->Top -= 10;
			}
			else if (selected == "NOtammendi")
			{
				NOtammendi->Top -= 10;
			}
			else if (selected == "Rsterling")
			{
				Rsterling->Top -= 10;
			}
			else if (selected == "DSilva")
			{
				DSilva->Top -= 10;
			}
			else if (selected == "KDebruyne")
			{
				KDebruyne->Top -= 10;
			}
			else if (selected == "Fernandinho")
			{
				Fernandinho->Top -= 10;
			}
			else if (selected == "Ederson")
			{
				Ederson->Top -= 10;
			}
			else if (selected == "VKompany")
			{
				VKompany->Top -= 10;
			}
			else if (selected == "KWalker")
			{
				KWalker->Top -= 10;
			}
			else if (selected == "OZinchenko")
			{
				OZinchenko->Top -= 10;
			}
			else if (selected == "BSilva")
			{
				BSilva->Top -= 10;
			}
			else if (selected == "CBravo")
			{
				CBravo->Top -= 10;
			}
			else if (selected == "GJesus")
			{
				GJesus->Top -= 10;
			}
		}
		
		//function that detects current5 selected player and then moves it down 10 px
		void SelectedPlayerDown()
		{
			if (selected == "BMendy")
			{
				BMendy->Top += 10;
			}
			else if (selected == "IGundagon")
			{
				IGundagon->Top += 10;
			}
			else if (selected == "JStones")
			{
				JStones->Top += 10;
			}
			else if (selected == "SAguero")
			{
				SAguero->Top += 10;
			}
			else if (selected == "ALaporte")
			{
				ALaporte->Top += 10;
			}
			else if (selected == "LSane")
			{
				LSane->Top += 10;
			}
			else if (selected == "NOtammendi")
			{
				NOtammendi->Top += 10;;
			}
			else if (selected == "Rsterling")
			{
				Rsterling->Top += 10;
			}
			else if (selected == "DSilva")
			{
				DSilva->Top += 10;
			}
			else if (selected == "KDebruyne")
			{
				KDebruyne->Top += 10;
			}
			else if (selected == "Fernandinho")
			{
				Fernandinho->Top += 10;
			}
			else if (selected == "Ederson")
			{
				Ederson->Top += 10;
			}
			else if (selected == "VKompany")
			{
				VKompany->Top += 10;
			}
			else if (selected == "KWalker")
			{
				KWalker->Top += 10;
			}
			else if (selected == "OZinchenko")
			{
				OZinchenko->Top += 10;
			}
			else if (selected == "BSilva")
			{
				BSilva->Top += 10;
			}
			else if (selected == "CBravo")
			{
				CBravo->Top += 10;
			}
			else if (selected == "GJesus")
			{
				GJesus->Top += 10;
			}
		}

		//function that detects current5 selected player and then moves it left 10 px
		void SelectedPlayerLeft()
		{
			if (selected == "BMendy")
			{
				BMendy->Left -= 10;
			}
			else if (selected == "IGundagon")
			{
				IGundagon->Left -= 10;
			}
			else if (selected == "JStones")
			{
				JStones->Left -= 10;
			}
			else if (selected == "SAguero")
			{
				SAguero->Left -= 10;
			}
			else if (selected == "ALaporte")
			{
				ALaporte->Left -= 10;
			}
			else if (selected == "LSane")
			{
				LSane->Left -= 10;
			}
			else if (selected == "NOtammendi")
			{
				NOtammendi->Left -= 10;
			}
			else if (selected == "Rsterling")
			{
				Rsterling->Left -= 10;
			}
			else if (selected == "DSilva")
			{
				DSilva->Left -= 10;
			}
			else if (selected == "KDebruyne")
			{
				KDebruyne->Left -= 10;
			}
			else if (selected == "Fernandinho")
			{
				Fernandinho->Left -= 10;
			}
			else if (selected == "Ederson")
			{
				Ederson->Left -= 10;
			}
			else if (selected == "VKompany")
			{
				VKompany->Left -= 10;
			}
			else if (selected == "KWalker")
			{
				KWalker->Left -= 10;
			}
			else if (selected == "OZinchenko")
			{
				OZinchenko->Left -= 10;
			}
			else if (selected == "BSilva")
			{
				BSilva->Left -= 10;
			}
			else if (selected == "CBravo")
			{
				CBravo->Left -= 10;
			}
			else if (selected == "GJesus")
			{
				GJesus->Left -= 10;
			}
		}

		//function that detects current5 selected player and then moves it right 10 px
		void SelectedPlayerRight()
		{
			if (selected == "BMendy")
			{
				BMendy->Left += 10;
			}
			else if (selected == "IGundagon")
			{
				IGundagon->Left += 10;
			}
			else if (selected == "JStones")
			{
				JStones->Left += 10;
			}
			else if (selected == "SAguero")
			{
				SAguero->Left += 10;
			}
			else if (selected == "ALaporte")
			{
				ALaporte->Left += 10;
			}
			else if (selected == "LSane")
			{
				LSane->Left += 10;
			}
			else if (selected == "NOtammendi")
			{
				NOtammendi->Left += 10;
			}
			else if (selected == "Rsterling")
			{
				Rsterling->Left += 10;
			}
			else if (selected == "DSilva")
			{
				DSilva->Left += 10;
			}
			else if (selected == "KDebruyne")
			{
				KDebruyne->Left += 10;
			}
			else if (selected == "Fernandinho")
			{
				Fernandinho->Left += 10;
			}
			else if (selected == "Ederson")
			{
				Ederson->Left += 10;
			}
			else if (selected == "VKompany")
			{
				VKompany->Left += 10;
			}
			else if (selected == "KWalker")
			{
				KWalker->Left += 10;
			}
			else if (selected == "OZinchenko")
			{
				OZinchenko->Left += 10;
			}
			else if (selected == "BSilva")
			{
				BSilva->Left += 10;
			}
			else if (selected == "CBravo")
			{
				CBravo->Left += 10;
			}
			else if (selected == "GJesus")
			{
				GJesus->Left += 10;
			}
		}

		//function that sets current selected players position to LCB
		void Lcb()
		{
			if (selected == "BMendy")
			{
				BMendy->Location = Point(120, 520);
			}
			else if (selected == "IGundagon")
			{
				IGundagon->Location = Point(120, 520);
			}
			else if (selected == "JStones")
			{
				JStones->Location = Point(120, 520);
			}
			else if (selected == "SAguero")
			{
				SAguero->Location = Point(120, 520);
			}
			else if (selected == "ALaporte")
			{
				ALaporte->Location = Point(120, 520);
			}
			else if (selected == "LSane")
			{
				LSane->Location = Point(120, 520);
			}
			else if (selected == "NOtammendi")
			{
				NOtammendi->Location = Point(120, 520);
			}
			else if (selected == "Rsterling")
			{
				Rsterling->Location = Point(120, 520);
			}
			else if (selected == "DSilva")
			{
				DSilva->Location = Point(120, 520);
			}
			else if (selected == "KDebruyne")
			{
				KDebruyne->Location = Point(120, 520);
			}
			else if (selected == "Fernandinho")
			{
				Fernandinho->Location = Point(120, 520);
			}
			 else if (selected == "Ederson")
			{
				Ederson->Location = Point(120, 520);
			}
			 else if (selected == "VKompany")
			 {
				 VKompany->Location = Point(120, 520);
			 }
			 else if (selected == "KWalker")
			 {
				 KWalker->Location = Point(120, 520);
			 }
			 else if (selected == "OZinchenko")
			 {
				 OZinchenko->Location = Point(120, 520);
			 }
			 else if (selected == "BSilva")
			 {
				 BSilva->Location = Point(120, 520);
			 }
			 else if (selected == "CBravo")
			 {
				 CBravo->Location = Point(120, 520);
			 }
			 else if (selected == "GJesus")
			 {
				 GJesus->Location = Point(120, 520);
			 }
		}

		//function that sets current selected players position to RCB
		void Rcb()
		{
			if (selected == "BMendy")
			{
				BMendy->Location = Point(300, 520);
			}
			else if (selected == "IGundagon")
			{
				IGundagon->Location = Point(300, 520);
			}
			else if (selected == "JStones")
			{
				JStones->Location = Point(300, 520);
			}
			else if (selected == "SAguero")
			{
				SAguero->Location = Point(300, 520);;
			}
			else if (selected == "ALaporte")
			{
				ALaporte->Location = Point(300, 520);
			}
			else if (selected == "LSane")
			{
				LSane->Location = Point(300, 520);
			}
			else if (selected == "NOtammendi")
			{
				NOtammendi->Location = Point(300, 520);
			}
			else if (selected == "Rsterling")
			{
				Rsterling->Location = Point(300, 520);
			}
			else if (selected == "DSilva")
			{
				DSilva->Location = Point(300, 520);
			}
			else if (selected == "KDebruyne")
			{
				KDebruyne->Location = Point(300, 520);
			}
			else if (selected == "Fernandinho")
			{
				Fernandinho->Location = Point(300, 520);
			}
			if (selected == "Ederson")
			{
				Ederson->Location = Point(300, 520);
			}
			else if (selected == "VKompany")
			{
				VKompany->Location = Point(300, 520);
			}
			else if (selected == "KWalker")
			{
				KWalker->Location = Point(300, 520);
			}
			else if (selected == "OZinchenko")
			{
				OZinchenko->Location = Point(300, 520);
			}
			else if (selected == "BSilva")
			{
				BSilva->Location = Point(300, 520);
			}
			else if (selected == "CBravo")
			{
				CBravo->Location = Point(300, 520);
			}
			else if (selected == "GJesus")
			{
				GJesus->Location = Point(300, 520);
			}
		}

		//function that sets current selected players position to CB
		void Cb()
		{
			if (selected == "BMendy")
			{
				BMendy->Location = Point(210, 520);
			}
			else if (selected == "IGundagon")
			{
				IGundagon->Location = Point(210, 520);
			}
			else if (selected == "JStones")
			{
				JStones->Location = Point(210, 520);
			}
			else if (selected == "SAguero")
			{
				SAguero->Location = Point(210, 520);;
			}
			else if (selected == "ALaporte")
			{
				ALaporte->Location = Point(210, 520);
			}
			else if (selected == "LSane")
			{
				LSane->Location = Point(210, 520);
			}
			else if (selected == "NOtammendi")
			{
				NOtammendi->Location = Point(210, 520);
			}
			else if (selected == "Rsterling")
			{
				Rsterling->Location = Point(210, 520);
			}
			else if (selected == "DSilva")
			{
				DSilva->Location = Point(210, 520);
			}
			else if (selected == "KDebruyne")
			{
				KDebruyne->Location = Point(210, 520);
			}
			else if (selected == "Fernandinho")
			{
				Fernandinho->Location = Point(210, 520);
			}
			if (selected == "Ederson")
			{
				Ederson->Location = Point(210, 520);
			}
			else if (selected == "VKompany")
			{
				VKompany->Location = Point(210, 520);
			}
			else if (selected == "KWalker")
			{
				KWalker->Location = Point(210, 520);
			}
			else if (selected == "OZinchenko")
			{
				OZinchenko->Location = Point(210, 520);
			}
			else if (selected == "BSilva")
			{
				BSilva->Location = Point(210, 520);
			}
			else if (selected == "CBravo")
			{
				CBravo->Location = Point(210, 520);
			}
			else if (selected == "GJesus")
			{
				GJesus->Location = Point(210, 520);
			}
		}

		//function that sets current selected players position to LB
		void Lb()
		{
			if (selected == "BMendy")
			{
				BMendy->Location = Point(30, 520);
			}
			else if (selected == "IGundagon")
			{
				IGundagon->Location = Point(30, 520);
			}
			else if (selected == "JStones")
			{
				JStones->Location = Point(30, 520);
			}
			else if (selected == "SAguero")
			{
				SAguero->Location = Point(30, 520);
			}
			else if (selected == "ALaporte")
			{
				ALaporte->Location = Point(30, 520);
			}
			else if (selected == "LSane")
			{
				LSane->Location = Point(30, 520);
			}
			else if (selected == "NOtammendi")
			{
				NOtammendi->Location = Point(30, 520);
			}
			else if (selected == "Rsterling")
			{
				Rsterling->Location = Point(30, 520);
			}
			else if (selected == "DSilva")
			{
				DSilva->Location = Point(30, 520);
			}
			else if (selected == "KDebruyne")
			{
				KDebruyne->Location = Point(30, 520);
			}
			else if (selected == "Fernandinho")
			{
				Fernandinho->Location = Point(30, 520);
			}
			if (selected == "Ederson")
			{
				Ederson->Location = Point(30, 520);
			}
			else if (selected == "VKompany")
			{
				VKompany->Location = Point(30, 520);
			}
			else if (selected == "KWalker")
			{
				KWalker->Location = Point(30, 520);
			}
			else if (selected == "OZinchenko")
			{
				OZinchenko->Location = Point(30, 520);
			}
			else if (selected == "BSilva")
			{
				BSilva->Location = Point(30, 520);
			}
			else if (selected == "CBravo")
			{
				CBravo->Location = Point(30, 520);
			}
			else if (selected == "GJesus")
			{
				GJesus->Location = Point(30, 520);
			}
		}

		//function that sets current selected players position to RB
		void Rb()
		{
			if (selected == "BMendy")
			{
				BMendy->Location = Point(385, 520);
			}
			else if (selected == "IGundagon")
			{
				IGundagon->Location = Point(385, 520);
			}
			else if (selected == "JStones")
			{
				JStones->Location = Point(385, 520);
			}
			else if (selected == "SAguero")
			{
				SAguero->Location = Point(385, 520);
			}
			else if (selected == "ALaporte")
			{
				ALaporte->Location = Point(385, 520);
			}
			else if (selected == "LSane")
			{
				LSane->Location = Point(385, 520);
			}
			else if (selected == "NOtammendi")
			{
				NOtammendi->Location = Point(385, 520);
			}
			else if (selected == "Rsterling")
			{
				Rsterling->Location = Point(385, 520);
			}
			else if (selected == "DSilva")
			{
				DSilva->Location = Point(385, 520);
			}
			else if (selected == "KDebruyne")
			{
				KDebruyne->Location = Point(385, 520);
			}
			else if (selected == "Fernandinho")
			{
				Fernandinho->Location = Point(385, 520);
			}
			if (selected == "Ederson")
			{
				Ederson->Location = Point(385, 520);
			}
			else if (selected == "VKompany")
			{
				VKompany->Location = Point(385, 520);
			}
			else if (selected == "KWalker")
			{
				KWalker->Location = Point(385, 520);
			}
			else if (selected == "OZinchenko")
			{
				OZinchenko->Location = Point(385, 520);
			}
			else if (selected == "BSilva")
			{
				BSilva->Location = Point(385, 520);
			}
			else if (selected == "CBravo")
			{
				CBravo->Location = Point(385, 520);
			}
			else if (selected == "GJesus")
			{
				GJesus->Location = Point(385, 520);
			}
		}

		//function that sets current selected players position to CDM
		void Cdm()
		{
			if (selected == "BMendy")
			{
				BMendy->Location = Point(210, 450);
			}
			else if (selected == "IGundagon")
			{
				IGundagon->Location = Point(210, 450);
			}
			else if (selected == "JStones")
			{
				JStones->Location = Point(210, 450);
			}
			else if (selected == "SAguero")
			{
				SAguero->Location = Point(210, 450);
			}
			else if (selected == "ALaporte")
			{
				ALaporte->Location = Point(210, 450);
			}
			else if (selected == "LSane")
			{
				LSane->Location = Point(210, 450);
			}
			else if (selected == "NOtammendi")
			{
				NOtammendi->Location = Point(210, 450);
			}
			else if (selected == "Rsterling")
			{
				Rsterling->Location = Point(210, 450);
			}
			else if (selected == "DSilva")
			{
				DSilva->Location = Point(210, 450);
			}
			else if (selected == "KDebruyne")
			{
				KDebruyne->Location = Point(210, 450);
			}
			else if (selected == "Fernandinho")
			{
				Fernandinho->Location = Point(210, 450);
			}
			if (selected == "Ederson")
			{
				Ederson->Location = Point(210, 450);
			}
			else if (selected == "VKompany")
			{
				VKompany->Location = Point(210, 450);
			}
			else if (selected == "KWalker")
			{
				KWalker->Location = Point(210, 450);
			}
			else if (selected == "OZinchenko")
			{
				OZinchenko->Location = Point(210, 450);
			}
			else if (selected == "BSilva")
			{
				BSilva->Location = Point(210, 450);
			}
			else if (selected == "CBravo")
			{
				CBravo->Location = Point(210, 450);
			}
			else if (selected == "GJesus")
			{
				GJesus->Location = Point(210, 450);
			}
		}

		//function that sets current selected players position to CM
		void Cm()
		{
			if (selected == "BMendy")
			{
				BMendy->Location = Point(210, 350);
			}
			else if (selected == "IGundagon")
			{
				IGundagon->Location = Point(210, 350);
			}
			else if (selected == "JStones")
			{
				JStones->Location = Point(210, 350);
			}
			else if (selected == "SAguero")
			{
				SAguero->Location = Point(210, 350);
			}
			else if (selected == "ALaporte")
			{
				ALaporte->Location = Point(210, 350);
			}
			else if (selected == "LSane")
			{
				LSane->Location = Point(210, 350);
			}
			else if (selected == "NOtammendi")
			{
				NOtammendi->Location = Point(210, 350);
			}
			else if (selected == "Rsterling")
			{
				Rsterling->Location = Point(210, 350);
			}
			else if (selected == "DSilva")
			{
				DSilva->Location = Point(210, 350);
			}
			else if (selected == "KDebruyne")
			{
				KDebruyne->Location = Point(210, 350);
			}
			else if (selected == "Fernandinho")
			{
				Fernandinho->Location = Point(210, 350);
			}
			if (selected == "Ederson")
			{
				Ederson->Location = Point(210, 350);
			}
			else if (selected == "VKompany")
			{
				VKompany->Location = Point(210, 350);
			}
			else if (selected == "KWalker")
			{
				KWalker->Location = Point(210, 350);
			}
			else if (selected == "OZinchenko")
			{
				OZinchenko->Location = Point(210, 350);
			}
			else if (selected == "BSilva")
			{
				BSilva->Location = Point(210, 350);
			}
			else if (selected == "CBravo")
			{
				CBravo->Location = Point(210, 350);
			}
			else if (selected == "GJesus")
			{
				GJesus->Location = Point(210, 350);
			}
		}

		//function that sets current selected players position to CAM
		void Cam()
		{
			if (selected == "BMendy")
			{
				BMendy->Location = Point(210, 250);
			}
			else if (selected == "IGundagon")
			{
				IGundagon->Location = Point(210, 250);
			}
			else if (selected == "JStones")
			{
				JStones->Location = Point(210, 250);
			}
			else if (selected == "SAguero")
			{
				SAguero->Location = Point(210, 250);
			}
			else if (selected == "ALaporte")
			{
				ALaporte->Location = Point(210, 250);
			}
			else if (selected == "LSane")
			{
				LSane->Location = Point(210, 250);
			}
			else if (selected == "NOtammendi")
			{
				NOtammendi->Location = Point(210, 250);
			}
			else if (selected == "Rsterling")
			{
				Rsterling->Location = Point(210, 250);
			}
			else if (selected == "DSilva")
			{
				DSilva->Location = Point(210, 250);
			}
			else if (selected == "KDebruyne")
			{
				KDebruyne->Location = Point(210, 250);
			}
			else if (selected == "Fernandinho")
			{
				Fernandinho->Location = Point(210, 250);
			}
			if (selected == "Ederson")
			{
				Ederson->Location = Point(210, 250);
			}
			else if (selected == "VKompany")
			{
				VKompany->Location = Point(210, 250);
			}
			else if (selected == "KWalker")
			{
				KWalker->Location = Point(210, 250);
			}
			else if (selected == "OZinchenko")
			{
				OZinchenko->Location = Point(210, 250);
			}
			else if (selected == "BSilva")
			{
				BSilva->Location = Point(210, 250);
			}
			else if (selected == "CBravo")
			{
				CBravo->Location = Point(210, 250);
			}
			else if (selected == "GJesus")
			{
				GJesus->Location = Point(210, 250);
			}
		}

		//function that sets current selected players position to LM
		void Lm()
		{
			if (selected == "BMendy")
			{
				BMendy->Location = Point(30, 350);
			}
			else if (selected == "IGundagon")
			{
				IGundagon->Location = Point(30, 350);
			}
			else if (selected == "JStones")
			{
				JStones->Location = Point(30, 350);
			}
			else if (selected == "SAguero")
			{
				SAguero->Location = Point(30, 350);
			}
			else if (selected == "ALaporte")
			{
				ALaporte->Location = Point(30, 350);
			}
			else if (selected == "LSane")
			{
				LSane->Location = Point(30, 350);
			}
			else if (selected == "NOtammendi")
			{
				NOtammendi->Location = Point(30, 350);
			}
			else if (selected == "Rsterling")
			{
				Rsterling->Location = Point(30, 350);
			}
			else if (selected == "DSilva")
			{
				DSilva->Location = Point(30, 350);
			}
			else if (selected == "KDebruyne")
			{
				KDebruyne->Location = Point(30, 350);
			}
			else if (selected == "Fernandinho")
			{
				Fernandinho->Location = Point(30, 350);
			}
			if (selected == "Ederson")
			{
				Ederson->Location = Point(30, 350);
			}
			else if (selected == "VKompany")
			{
				VKompany->Location = Point(30, 350);
			}
			else if (selected == "KWalker")
			{
				KWalker->Location = Point(30, 350);
			}
			else if (selected == "OZinchenko")
			{
				OZinchenko->Location = Point(30, 350);
			}
			else if (selected == "BSilva")
			{
				BSilva->Location = Point(30, 350);
			}
			else if (selected == "CBravo")
			{
				CBravo->Location = Point(30, 350);
			}
			else if (selected == "GJesus")
			{
				GJesus->Location = Point(30, 350);
			}
		}

		//function that sets current selected players position to RM
		void Rm()
		{
			if (selected == "BMendy")
			{
				BMendy->Location = Point(385, 350);
			}
			else if (selected == "IGundagon")
			{
				IGundagon->Location = Point(385, 350);
			}
			else if (selected == "JStones")
			{
				JStones->Location = Point(385, 350);
			}
			else if (selected == "SAguero")
			{
				SAguero->Location = Point(385, 350);
			}
			else if (selected == "ALaporte")
			{
				ALaporte->Location = Point(385, 350);
			}
			else if (selected == "LSane")
			{
				LSane->Location = Point(385, 350);
			}
			else if (selected == "NOtammendi")
			{
				NOtammendi->Location = Point(385, 350);
			}
			else if (selected == "Rsterling")
			{
				Rsterling->Location = Point(385, 350);
			}
			else if (selected == "DSilva")
			{
				DSilva->Location = Point(385, 350);
			}
			else if (selected == "KDebruyne")
			{
				KDebruyne->Location = Point(385, 350);
			}
			else if (selected == "Fernandinho")
			{
				Fernandinho->Location = Point(385, 350);
			}
			if (selected == "Ederson")
			{
				Ederson->Location = Point(385, 350);
			}
			else if (selected == "VKompany")
			{
				VKompany->Location = Point(385, 350);
			}
			else if (selected == "KWalker")
			{
				KWalker->Location = Point(385, 350);
			}
			else if (selected == "OZinchenko")
			{
				OZinchenko->Location = Point(385, 350);
			}
			else if (selected == "BSilva")
			{
				BSilva->Location = Point(385, 350);
			}
			else if (selected == "CBravo")
			{
				CBravo->Location = Point(385, 350);
			}
			else if (selected == "GJesus")
			{
				GJesus->Location = Point(385, 350);
			}
		}

		//function that sets current selected players position to CAM
		void St()
		{
			if (selected == "BMendy")
			{
				BMendy->Location = Point(210, 100);
			}
			else if (selected == "IGundagon")
			{
				IGundagon->Location = Point(210, 100);
			}
			else if (selected == "JStones")
			{
				JStones->Location = Point(210, 100);
			}
			else if (selected == "SAguero")
			{
				SAguero->Location = Point(210, 100);
			}
			else if (selected == "ALaporte")
			{
				ALaporte->Location = Point(210, 100);
			}
			else if (selected == "LSane")
			{
				LSane->Location = Point(210, 100);
			}
			else if (selected == "NOtammendi")
			{
				NOtammendi->Location = Point(210, 100);
			}
			else if (selected == "Rsterling")
			{
				Rsterling->Location = Point(210, 100);
			}
			else if (selected == "DSilva")
			{
				DSilva->Location = Point(210, 100);
			}
			else if (selected == "KDebruyne")
			{
				KDebruyne->Location = Point(210, 100);
			}
			else if (selected == "Fernandinho")
			{
				Fernandinho->Location = Point(210, 100);
			}
			if (selected == "Ederson")
			{
				Ederson->Location = Point(210, 100);
			}
			else if (selected == "VKompany")
			{
				VKompany->Location = Point(210, 100);
			}
			else if (selected == "KWalker")
			{
				KWalker->Location = Point(210, 100);
			}
			else if (selected == "OZinchenko")
			{
				OZinchenko->Location = Point(210, 100);
			}
			else if (selected == "BSilva")
			{
				BSilva->Location = Point(210, 100);
			}
			else if (selected == "CBravo")
			{
				CBravo->Location = Point(210, 100);
			}
			else if (selected == "GJesus")
			{
				GJesus->Location = Point(210, 100);
			}
		}

		//function that sets current selected players position to CAM
		void Rst()
		{
			if (selected == "BMendy")
			{
				BMendy->Location = Point(300, 100);
			}
			else if (selected == "IGundagon")
			{
				IGundagon->Location = Point(300, 100);
			}
			else if (selected == "JStones")
			{
				JStones->Location = Point(300, 100);
			}
			else if (selected == "SAguero")
			{
				SAguero->Location = Point(300, 100);
			}
			else if (selected == "ALaporte")
			{
				ALaporte->Location = Point(300, 100);
			}
			else if (selected == "LSane")
			{
				LSane->Location = Point(300, 100);
			}
			else if (selected == "NOtammendi")
			{
				NOtammendi->Location = Point(300, 100);
			}
			else if (selected == "Rsterling")
			{
				Rsterling->Location = Point(300, 100);
			}
			else if (selected == "DSilva")
			{
				DSilva->Location = Point(300, 100);
			}
			else if (selected == "KDebruyne")
			{
				KDebruyne->Location = Point(300, 100);
			}
			else if (selected == "Fernandinho")
			{
				Fernandinho->Location = Point(300, 100);
			}
			if (selected == "Ederson")
			{
				Ederson->Location = Point(300, 100);
			}
			else if (selected == "VKompany")
			{
				VKompany->Location = Point(300, 100);
			}
			else if (selected == "KWalker")
			{
				KWalker->Location = Point(300, 100);
			}
			else if (selected == "OZinchenko")
			{
				OZinchenko->Location = Point(300, 100);
			}
			else if (selected == "BSilva")
			{
				BSilva->Location = Point(300, 100);
			}
			else if (selected == "CBravo")
			{
				CBravo->Location = Point(300, 100);
			}
			else if (selected == "GJesus")
			{
				GJesus->Location = Point(300, 100);
			}
		}

		//function that sets current selected players position to CAM
		void Lst()
		{
			if (selected == "BMendy")
			{
				BMendy->Location = Point(120, 100);
			}
			else if (selected == "IGundagon")
			{
				IGundagon->Location = Point(120, 100);
			}
			else if (selected == "JStones")
			{
				JStones->Location = Point(120, 100);
			}
			else if (selected == "SAguero")
			{
				SAguero->Location = Point(120, 100);
			}
			else if (selected == "ALaporte")
			{
				ALaporte->Location = Point(120, 100);
			}
			else if (selected == "LSane")
			{
				LSane->Location = Point(120, 100);
			}
			else if (selected == "NOtammendi")
			{
				NOtammendi->Location = Point(120, 100);
			}
			else if (selected == "Rsterling")
			{
				Rsterling->Location = Point(120, 100);
			}
			else if (selected == "DSilva")
			{
				DSilva->Location = Point(120, 100);
			}
			else if (selected == "KDebruyne")
			{
				KDebruyne->Location = Point(120, 100);
			}
			else if (selected == "Fernandinho")
			{
				Fernandinho->Location = Point(120, 100);
			}
			if (selected == "Ederson")
			{
				Ederson->Location = Point(120, 100);
			}
			else if (selected == "VKompany")
			{
				VKompany->Location = Point(120, 100);
			}
			else if (selected == "KWalker")
			{
				KWalker->Location = Point(120, 100);
			}
			else if (selected == "OZinchenko")
			{
				OZinchenko->Location = Point(120, 100);
			}
			else if (selected == "BSilva")
			{
				BSilva->Location = Point(120, 100);
			}
			else if (selected == "CBravo")
			{
				CBravo->Location = Point(120, 100);
			}
			else if (selected == "GJesus")
			{
				GJesus->Location = Point(120, 100);
			}
		}

		//function that sets current selected players position to CAM
		void Lw()
		{
			if (selected == "BMendy")
			{
				BMendy->Location = Point(30, 100);
			}
			else if (selected == "IGundagon")
			{
				IGundagon->Location = Point(30, 100);
			}
			else if (selected == "JStones")
			{
				JStones->Location = Point(30, 100);
			}
			else if (selected == "SAguero")
			{
				SAguero->Location = Point(30, 100);
			}
			else if (selected == "ALaporte")
			{
				ALaporte->Location = Point(30, 100);
			}
			else if (selected == "LSane")
			{
				LSane->Location = Point(30, 100);
			}
			else if (selected == "NOtammendi")
			{
				NOtammendi->Location = Point(30, 100);
			}
			else if (selected == "Rsterling")
			{
				Rsterling->Location = Point(30, 100);
			}
			else if (selected == "DSilva")
			{
				DSilva->Location = Point(30, 100);
			}
			else if (selected == "KDebruyne")
			{
				KDebruyne->Location = Point(30, 100);
			}
			else if (selected == "Fernandinho")
			{
				Fernandinho->Location = Point(30, 100);
			}
			if (selected == "Ederson")
			{
				Ederson->Location = Point(30, 100);
			}
			else if (selected == "VKompany")
			{
				VKompany->Location = Point(30, 100);
			}
			else if (selected == "KWalker")
			{
				KWalker->Location = Point(30, 100);
			}
			else if (selected == "OZinchenko")
			{
				OZinchenko->Location = Point(30, 100);
			}
			else if (selected == "BSilva")
			{
				BSilva->Location = Point(30, 100);
			}
			else if (selected == "CBravo")
			{
				CBravo->Location = Point(30, 100);
			}
			else if (selected == "GJesus")
			{
				GJesus->Location = Point(30, 100);
			}
		}

		//function that sets current selected players position to CAM
		void Rw()
		{
			if (selected == "BMendy")
			{
				BMendy->Location = Point(385, 100);
			}
			else if (selected == "IGundagon")
			{
				IGundagon->Location = Point(385, 100);
			}
			else if (selected == "JStones")
			{
				JStones->Location = Point(385, 100);
			}
			else if (selected == "SAguero")
			{
				SAguero->Location = Point(385, 100);
			}
			else if (selected == "ALaporte")
			{
				ALaporte->Location = Point(385, 100);
			}
			else if (selected == "LSane")
			{
				LSane->Location = Point(385, 100);
			}
			else if (selected == "NOtammendi")
			{
				NOtammendi->Location = Point(385, 100);
			}
			else if (selected == "Rsterling")
			{
				Rsterling->Location = Point(385, 100);
			}
			else if (selected == "DSilva")
			{
				DSilva->Location = Point(385, 100);
			}
			else if (selected == "KDebruyne")
			{
				KDebruyne->Location = Point(385, 100);
			}
			else if (selected == "Fernandinho")
			{
				Fernandinho->Location = Point(385, 100);
			}
			if (selected == "Ederson")
			{
				Ederson->Location = Point(385, 100);
			}
			else if (selected == "VKompany")
			{
				VKompany->Location = Point(385, 100);
			}
			else if (selected == "KWalker")
			{
				KWalker->Location = Point(385, 100);
			}
			else if (selected == "OZinchenko")
			{
				OZinchenko->Location = Point(385, 100);
			}
			else if (selected == "BSilva")
			{
				BSilva->Location = Point(385, 100);
			}
			else if (selected == "CBravo")
			{
				CBravo->Location = Point(385, 100);
			}
			else if (selected == "GJesus")
			{
				GJesus->Location = Point(385, 100);
			}
		}

		//function that sets current selected players position to CAM
		void Gk()
		{
			if (selected == "BMendy")
			{
				BMendy->Location = Point(210, 630);
			}
			else if (selected == "IGundagon")
			{
				IGundagon->Location = Point(210, 630);
			}
			else if (selected == "JStones")
			{
				JStones->Location = Point(210, 630);
			}
			else if (selected == "SAguero")
			{
				SAguero->Location = Point(210, 630);
			}
			else if (selected == "ALaporte")
			{
				ALaporte->Location = Point(210, 630);
			}
			else if (selected == "LSane")
			{
				LSane->Location = Point(210, 630);
			}
			else if (selected == "NOtammendi")
			{
				NOtammendi->Location = Point(210, 630);
			}
			else if (selected == "Rsterling")
			{
				Rsterling->Location = Point(210, 630);
			}
			else if (selected == "DSilva")
			{
				DSilva->Location = Point(210, 630);
			}
			else if (selected == "KDebruyne")
			{
				KDebruyne->Location = Point(210, 630);
			}
			else if (selected == "Fernandinho")
			{
				Fernandinho->Location = Point(210, 630);
			}
			if (selected == "Ederson")
			{
				Ederson->Location = Point(210, 630);
			}
			else if (selected == "VKompany")
			{
				VKompany->Location = Point(210, 630);
			}
			else if (selected == "KWalker")
			{
				KWalker->Location = Point(210, 630);
			}
			else if (selected == "OZinchenko")
			{
				OZinchenko->Location = Point(210, 630);
			}
			else if (selected == "BSilva")
			{
				BSilva->Location = Point(210, 630);
			}
			else if (selected == "CBravo")
			{
				CBravo->Location = Point(210, 630);
			}
			else if (selected == "GJesus")
			{
				GJesus->Location = Point(210, 630);
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  Field;
	private: System::Windows::Forms::Button^  BMendy;
	private: System::Windows::Forms::Button^  JStones;
	private: System::Windows::Forms::Button^  SAguero;
	private: System::Windows::Forms::Button^  ALaporte;
	private: System::Windows::Forms::Button^  LSane;
	private: System::Windows::Forms::Button^  NOtammendi;
	private: System::Windows::Forms::Button^  Rsterling;
	private: System::Windows::Forms::Button^  DSilva;
	private: System::Windows::Forms::Button^  KDebruyne;
	private: System::Windows::Forms::Button^  Fernandinho;
	private: System::Windows::Forms::Button^  Ederson;
	private: System::Windows::Forms::Button^  ALeft;
	private: System::Windows::Forms::Button^  AUp;
	private: System::Windows::Forms::Button^  ADown;
	private: System::Windows::Forms::Button^  ARight;
	private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Button^  ResetB;

	private: System::Windows::Forms::Button^  IGundagon;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Field = (gcnew System::Windows::Forms::PictureBox());
			this->BMendy = (gcnew System::Windows::Forms::Button());
			this->JStones = (gcnew System::Windows::Forms::Button());
			this->SAguero = (gcnew System::Windows::Forms::Button());
			this->ALaporte = (gcnew System::Windows::Forms::Button());
			this->LSane = (gcnew System::Windows::Forms::Button());
			this->NOtammendi = (gcnew System::Windows::Forms::Button());
			this->Rsterling = (gcnew System::Windows::Forms::Button());
			this->DSilva = (gcnew System::Windows::Forms::Button());
			this->KDebruyne = (gcnew System::Windows::Forms::Button());
			this->Fernandinho = (gcnew System::Windows::Forms::Button());
			this->Ederson = (gcnew System::Windows::Forms::Button());
			this->ALeft = (gcnew System::Windows::Forms::Button());
			this->AUp = (gcnew System::Windows::Forms::Button());
			this->ADown = (gcnew System::Windows::Forms::Button());
			this->ARight = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ResetB = (gcnew System::Windows::Forms::Button());
			this->IGundagon = (gcnew System::Windows::Forms::Button());
			this->LCB = (gcnew System::Windows::Forms::Button());
			this->RCB = (gcnew System::Windows::Forms::Button());
			this->CB = (gcnew System::Windows::Forms::Button());
			this->LB = (gcnew System::Windows::Forms::Button());
			this->RightBack = (gcnew System::Windows::Forms::Button());
			this->Positions = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->CDM = (gcnew System::Windows::Forms::Button());
			this->CM = (gcnew System::Windows::Forms::Button());
			this->CAM = (gcnew System::Windows::Forms::Button());
			this->LM = (gcnew System::Windows::Forms::Button());
			this->RightMid = (gcnew System::Windows::Forms::Button());
			this->ST = (gcnew System::Windows::Forms::Button());
			this->RST = (gcnew System::Windows::Forms::Button());
			this->LST = (gcnew System::Windows::Forms::Button());
			this->LW = (gcnew System::Windows::Forms::Button());
			this->RW = (gcnew System::Windows::Forms::Button());
			this->GK = (gcnew System::Windows::Forms::Button());
			this->VKompany = (gcnew System::Windows::Forms::Button());
			this->KWalker = (gcnew System::Windows::Forms::Button());
			this->OZinchenko = (gcnew System::Windows::Forms::Button());
			this->BSilva = (gcnew System::Windows::Forms::Button());
			this->CBravo = (gcnew System::Windows::Forms::Button());
			this->GJesus = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Field))->BeginInit();
			this->SuspendLayout();
			// 
			// Field
			// 
			this->Field->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Field.Image")));
			this->Field->Location = System::Drawing::Point(12, 33);
			this->Field->Name = L"Field";
			this->Field->Size = System::Drawing::Size(454, 681);
			this->Field->TabIndex = 0;
			this->Field->TabStop = false;
			// 
			// BMendy
			// 
			this->BMendy->AllowDrop = true;
			this->BMendy->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BMendy.BackgroundImage")));
			this->BMendy->Location = System::Drawing::Point(472, 80);
			this->BMendy->Name = L"BMendy";
			this->BMendy->Size = System::Drawing::Size(60, 60);
			this->BMendy->TabIndex = 1;
			this->BMendy->UseVisualStyleBackColor = true;
			this->BMendy->Click += gcnew System::EventHandler(this, &MyForm::BMendy_Click);
			this->BMendy->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &MyForm::BMendy_DragDrop);
			// 
			// JStones
			// 
			this->JStones->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"JStones.BackgroundImage")));
			this->JStones->Location = System::Drawing::Point(472, 146);
			this->JStones->Name = L"JStones";
			this->JStones->Size = System::Drawing::Size(60, 60);
			this->JStones->TabIndex = 2;
			this->JStones->UseVisualStyleBackColor = true;
			this->JStones->Click += gcnew System::EventHandler(this, &MyForm::JStones_Click);
			// 
			// SAguero
			// 
			this->SAguero->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SAguero.BackgroundImage")));
			this->SAguero->Location = System::Drawing::Point(472, 212);
			this->SAguero->Name = L"SAguero";
			this->SAguero->Size = System::Drawing::Size(60, 60);
			this->SAguero->TabIndex = 3;
			this->SAguero->UseVisualStyleBackColor = true;
			this->SAguero->Click += gcnew System::EventHandler(this, &MyForm::SAguero_Click);
			// 
			// ALaporte
			// 
			this->ALaporte->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ALaporte.BackgroundImage")));
			this->ALaporte->Location = System::Drawing::Point(472, 278);
			this->ALaporte->Name = L"ALaporte";
			this->ALaporte->Size = System::Drawing::Size(60, 60);
			this->ALaporte->TabIndex = 4;
			this->ALaporte->UseVisualStyleBackColor = true;
			this->ALaporte->Click += gcnew System::EventHandler(this, &MyForm::ALaporte_Click);
			// 
			// LSane
			// 
			this->LSane->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LSane.BackgroundImage")));
			this->LSane->Location = System::Drawing::Point(538, 278);
			this->LSane->Name = L"LSane";
			this->LSane->Size = System::Drawing::Size(60, 60);
			this->LSane->TabIndex = 5;
			this->LSane->UseVisualStyleBackColor = true;
			this->LSane->Click += gcnew System::EventHandler(this, &MyForm::LSane_Click);
			// 
			// NOtammendi
			// 
			this->NOtammendi->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"NOtammendi.BackgroundImage")));
			this->NOtammendi->Location = System::Drawing::Point(604, 80);
			this->NOtammendi->Name = L"NOtammendi";
			this->NOtammendi->Size = System::Drawing::Size(60, 60);
			this->NOtammendi->TabIndex = 6;
			this->NOtammendi->UseVisualStyleBackColor = true;
			this->NOtammendi->Click += gcnew System::EventHandler(this, &MyForm::NOtammendi_Click);
			// 
			// Rsterling
			// 
			this->Rsterling->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Rsterling.BackgroundImage")));
			this->Rsterling->Location = System::Drawing::Point(604, 146);
			this->Rsterling->Name = L"Rsterling";
			this->Rsterling->Size = System::Drawing::Size(60, 60);
			this->Rsterling->TabIndex = 7;
			this->Rsterling->UseVisualStyleBackColor = true;
			this->Rsterling->Click += gcnew System::EventHandler(this, &MyForm::Rsterling_Click);
			// 
			// DSilva
			// 
			this->DSilva->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DSilva.BackgroundImage")));
			this->DSilva->Location = System::Drawing::Point(604, 278);
			this->DSilva->Name = L"DSilva";
			this->DSilva->Size = System::Drawing::Size(60, 60);
			this->DSilva->TabIndex = 8;
			this->DSilva->UseVisualStyleBackColor = true;
			this->DSilva->Click += gcnew System::EventHandler(this, &MyForm::DSilva_Click);
			// 
			// KDebruyne
			// 
			this->KDebruyne->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"KDebruyne.BackgroundImage")));
			this->KDebruyne->Location = System::Drawing::Point(538, 80);
			this->KDebruyne->Name = L"KDebruyne";
			this->KDebruyne->Size = System::Drawing::Size(60, 60);
			this->KDebruyne->TabIndex = 9;
			this->KDebruyne->UseVisualStyleBackColor = true;
			this->KDebruyne->Click += gcnew System::EventHandler(this, &MyForm::KDebruyne_Click);
			// 
			// Fernandinho
			// 
			this->Fernandinho->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Fernandinho.BackgroundImage")));
			this->Fernandinho->Location = System::Drawing::Point(538, 212);
			this->Fernandinho->Name = L"Fernandinho";
			this->Fernandinho->Size = System::Drawing::Size(60, 60);
			this->Fernandinho->TabIndex = 10;
			this->Fernandinho->UseVisualStyleBackColor = true;
			this->Fernandinho->Click += gcnew System::EventHandler(this, &MyForm::Fernandinho_Click);
			// 
			// Ederson
			// 
			this->Ederson->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Ederson.BackgroundImage")));
			this->Ederson->Location = System::Drawing::Point(538, 146);
			this->Ederson->Name = L"Ederson";
			this->Ederson->Size = System::Drawing::Size(60, 60);
			this->Ederson->TabIndex = 11;
			this->Ederson->UseVisualStyleBackColor = true;
			this->Ederson->Click += gcnew System::EventHandler(this, &MyForm::Ederson_Click);
			// 
			// ALeft
			// 
			this->ALeft->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ALeft.BackgroundImage")));
			this->ALeft->Location = System::Drawing::Point(140, 786);
			this->ALeft->Name = L"ALeft";
			this->ALeft->Size = System::Drawing::Size(60, 60);
			this->ALeft->TabIndex = 12;
			this->ALeft->UseVisualStyleBackColor = true;
			this->ALeft->Click += gcnew System::EventHandler(this, &MyForm::ALeft_Click);
			// 
			// AUp
			// 
			this->AUp->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AUp.BackgroundImage")));
			this->AUp->Location = System::Drawing::Point(199, 720);
			this->AUp->Name = L"AUp";
			this->AUp->Size = System::Drawing::Size(60, 60);
			this->AUp->TabIndex = 13;
			this->AUp->UseVisualStyleBackColor = true;
			this->AUp->Click += gcnew System::EventHandler(this, &MyForm::AUp_Click);
			// 
			// ADown
			// 
			this->ADown->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ADown.BackgroundImage")));
			this->ADown->Location = System::Drawing::Point(199, 853);
			this->ADown->Name = L"ADown";
			this->ADown->Size = System::Drawing::Size(60, 60);
			this->ADown->TabIndex = 14;
			this->ADown->UseVisualStyleBackColor = true;
			this->ADown->Click += gcnew System::EventHandler(this, &MyForm::ADown_Click);
			// 
			// ARight
			// 
			this->ARight->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ARight.BackgroundImage")));
			this->ARight->Location = System::Drawing::Point(258, 786);
			this->ARight->Name = L"ARight";
			this->ARight->Size = System::Drawing::Size(60, 60);
			this->ARight->TabIndex = 15;
			this->ARight->UseVisualStyleBackColor = true;
			this->ARight->Click += gcnew System::EventHandler(this, &MyForm::ARight_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 735);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 45);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Home";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// ResetB
			// 
			this->ResetB->Location = System::Drawing::Point(12, 799);
			this->ResetB->Name = L"ResetB";
			this->ResetB->Size = System::Drawing::Size(79, 45);
			this->ResetB->TabIndex = 17;
			this->ResetB->Text = L"Reset";
			this->ResetB->UseVisualStyleBackColor = true;
			this->ResetB->Click += gcnew System::EventHandler(this, &MyForm::ResetB_Click);
			// 
			// IGundagon
			// 
			this->IGundagon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"IGundagon.BackgroundImage")));
			this->IGundagon->Location = System::Drawing::Point(604, 212);
			this->IGundagon->Name = L"IGundagon";
			this->IGundagon->Size = System::Drawing::Size(60, 60);
			this->IGundagon->TabIndex = 18;
			this->IGundagon->UseVisualStyleBackColor = true;
			this->IGundagon->Click += gcnew System::EventHandler(this, &MyForm::IGundagon_Click);
			// 
			// LCB
			// 
			this->LCB->Location = System::Drawing::Point(472, 764);
			this->LCB->Name = L"LCB";
			this->LCB->Size = System::Drawing::Size(43, 25);
			this->LCB->TabIndex = 19;
			this->LCB->Text = L"LCB";
			this->LCB->UseVisualStyleBackColor = true;
			this->LCB->Click += gcnew System::EventHandler(this, &MyForm::LCB_Click);
			// 
			// RCB
			// 
			this->RCB->Location = System::Drawing::Point(472, 795);
			this->RCB->Name = L"RCB";
			this->RCB->Size = System::Drawing::Size(43, 25);
			this->RCB->TabIndex = 20;
			this->RCB->Text = L"RCB";
			this->RCB->UseVisualStyleBackColor = true;
			this->RCB->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// CB
			// 
			this->CB->Location = System::Drawing::Point(472, 826);
			this->CB->Name = L"CB";
			this->CB->Size = System::Drawing::Size(43, 25);
			this->CB->TabIndex = 21;
			this->CB->Text = L"CB";
			this->CB->UseVisualStyleBackColor = true;
			this->CB->Click += gcnew System::EventHandler(this, &MyForm::CB_Click);
			// 
			// LB
			// 
			this->LB->Location = System::Drawing::Point(472, 857);
			this->LB->Name = L"LB";
			this->LB->Size = System::Drawing::Size(43, 25);
			this->LB->TabIndex = 22;
			this->LB->Text = L"LB";
			this->LB->UseVisualStyleBackColor = true;
			this->LB->Click += gcnew System::EventHandler(this, &MyForm::LB_Click);
			// 
			// RightBack
			// 
			this->RightBack->Location = System::Drawing::Point(472, 888);
			this->RightBack->Name = L"RightBack";
			this->RightBack->Size = System::Drawing::Size(43, 25);
			this->RightBack->TabIndex = 23;
			this->RightBack->Text = L"RB";
			this->RightBack->UseVisualStyleBackColor = true;
			this->RightBack->Click += gcnew System::EventHandler(this, &MyForm::RightBack_Click);
			// 
			// Positions
			// 
			this->Positions->AutoSize = true;
			this->Positions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->Positions->Location = System::Drawing::Point(498, 720);
			this->Positions->Name = L"Positions";
			this->Positions->Size = System::Drawing::Size(125, 31);
			this->Positions->TabIndex = 24;
			this->Positions->Text = L"Positions";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->label1->Location = System::Drawing::Point(518, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 31);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Players";
			// 
			// CDM
			// 
			this->CDM->Location = System::Drawing::Point(538, 764);
			this->CDM->Name = L"CDM";
			this->CDM->Size = System::Drawing::Size(43, 25);
			this->CDM->TabIndex = 26;
			this->CDM->Text = L"CDM";
			this->CDM->UseVisualStyleBackColor = true;
			this->CDM->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// CM
			// 
			this->CM->Location = System::Drawing::Point(538, 795);
			this->CM->Name = L"CM";
			this->CM->Size = System::Drawing::Size(43, 25);
			this->CM->TabIndex = 27;
			this->CM->Text = L"CM";
			this->CM->UseVisualStyleBackColor = true;
			this->CM->Click += gcnew System::EventHandler(this, &MyForm::CM_Click);
			// 
			// CAM
			// 
			this->CAM->Location = System::Drawing::Point(538, 826);
			this->CAM->Name = L"CAM";
			this->CAM->Size = System::Drawing::Size(43, 25);
			this->CAM->TabIndex = 28;
			this->CAM->Text = L"CAM";
			this->CAM->UseVisualStyleBackColor = true;
			this->CAM->Click += gcnew System::EventHandler(this, &MyForm::CAM_Click);
			// 
			// LM
			// 
			this->LM->Location = System::Drawing::Point(538, 857);
			this->LM->Name = L"LM";
			this->LM->Size = System::Drawing::Size(43, 25);
			this->LM->TabIndex = 29;
			this->LM->Text = L"LM";
			this->LM->UseVisualStyleBackColor = true;
			this->LM->Click += gcnew System::EventHandler(this, &MyForm::LM_Click_2);
			// 
			// RightMid
			// 
			this->RightMid->Location = System::Drawing::Point(538, 888);
			this->RightMid->Name = L"RightMid";
			this->RightMid->Size = System::Drawing::Size(43, 25);
			this->RightMid->TabIndex = 30;
			this->RightMid->Text = L"RM";
			this->RightMid->UseVisualStyleBackColor = true;
			this->RightMid->Click += gcnew System::EventHandler(this, &MyForm::RightMid_Click);
			// 
			// ST
			// 
			this->ST->Location = System::Drawing::Point(604, 764);
			this->ST->Name = L"ST";
			this->ST->Size = System::Drawing::Size(43, 25);
			this->ST->TabIndex = 31;
			this->ST->Text = L"ST";
			this->ST->UseVisualStyleBackColor = true;
			this->ST->Click += gcnew System::EventHandler(this, &MyForm::ST_Click_2);
			// 
			// RST
			// 
			this->RST->Location = System::Drawing::Point(604, 795);
			this->RST->Name = L"RST";
			this->RST->Size = System::Drawing::Size(43, 25);
			this->RST->TabIndex = 32;
			this->RST->Text = L"RST";
			this->RST->UseVisualStyleBackColor = true;
			this->RST->Click += gcnew System::EventHandler(this, &MyForm::RST_Click);
			// 
			// LST
			// 
			this->LST->Location = System::Drawing::Point(604, 826);
			this->LST->Name = L"LST";
			this->LST->Size = System::Drawing::Size(43, 25);
			this->LST->TabIndex = 33;
			this->LST->Text = L"LST";
			this->LST->UseVisualStyleBackColor = true;
			this->LST->Click += gcnew System::EventHandler(this, &MyForm::LST_Click);
			// 
			// LW
			// 
			this->LW->Location = System::Drawing::Point(604, 857);
			this->LW->Name = L"LW";
			this->LW->Size = System::Drawing::Size(43, 25);
			this->LW->TabIndex = 34;
			this->LW->Text = L"LW";
			this->LW->UseVisualStyleBackColor = true;
			this->LW->Click += gcnew System::EventHandler(this, &MyForm::LW_Click);
			// 
			// RW
			// 
			this->RW->Location = System::Drawing::Point(604, 888);
			this->RW->Name = L"RW";
			this->RW->Size = System::Drawing::Size(43, 25);
			this->RW->TabIndex = 35;
			this->RW->Text = L"RW";
			this->RW->UseVisualStyleBackColor = true;
			this->RW->Click += gcnew System::EventHandler(this, &MyForm::RW_Click);
			// 
			// GK
			// 
			this->GK->Location = System::Drawing::Point(423, 826);
			this->GK->Name = L"GK";
			this->GK->Size = System::Drawing::Size(43, 25);
			this->GK->TabIndex = 36;
			this->GK->Text = L"GK";
			this->GK->UseVisualStyleBackColor = true;
			this->GK->Click += gcnew System::EventHandler(this, &MyForm::GK_Click);
			// 
			// VKompany
			// 
			this->VKompany->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"VKompany.BackgroundImage")));
			this->VKompany->Location = System::Drawing::Point(472, 344);
			this->VKompany->Name = L"VKompany";
			this->VKompany->Size = System::Drawing::Size(60, 60);
			this->VKompany->TabIndex = 37;
			this->VKompany->UseVisualStyleBackColor = true;
			this->VKompany->Click += gcnew System::EventHandler(this, &MyForm::VKompany_Click);
			// 
			// KWalker
			// 
			this->KWalker->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"KWalker.BackgroundImage")));
			this->KWalker->Location = System::Drawing::Point(538, 344);
			this->KWalker->Name = L"KWalker";
			this->KWalker->Size = System::Drawing::Size(60, 60);
			this->KWalker->TabIndex = 38;
			this->KWalker->UseVisualStyleBackColor = true;
			this->KWalker->Click += gcnew System::EventHandler(this, &MyForm::KWalker_Click);
			// 
			// OZinchenko
			// 
			this->OZinchenko->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"OZinchenko.BackgroundImage")));
			this->OZinchenko->Location = System::Drawing::Point(604, 344);
			this->OZinchenko->Name = L"OZinchenko";
			this->OZinchenko->Size = System::Drawing::Size(60, 60);
			this->OZinchenko->TabIndex = 39;
			this->OZinchenko->UseVisualStyleBackColor = true;
			this->OZinchenko->Click += gcnew System::EventHandler(this, &MyForm::OZinchenko_Click);
			// 
			// BSilva
			// 
			this->BSilva->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BSilva.BackgroundImage")));
			this->BSilva->Location = System::Drawing::Point(472, 410);
			this->BSilva->Name = L"BSilva";
			this->BSilva->Size = System::Drawing::Size(60, 60);
			this->BSilva->TabIndex = 40;
			this->BSilva->UseVisualStyleBackColor = true;
			this->BSilva->Click += gcnew System::EventHandler(this, &MyForm::BSilva_Click);
			// 
			// CBravo
			// 
			this->CBravo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CBravo.BackgroundImage")));
			this->CBravo->Location = System::Drawing::Point(538, 410);
			this->CBravo->Name = L"CBravo";
			this->CBravo->Size = System::Drawing::Size(60, 60);
			this->CBravo->TabIndex = 41;
			this->CBravo->UseVisualStyleBackColor = true;
			this->CBravo->Click += gcnew System::EventHandler(this, &MyForm::CBravo_Click);
			// 
			// GJesus
			// 
			this->GJesus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"GJesus.BackgroundImage")));
			this->GJesus->Location = System::Drawing::Point(604, 410);
			this->GJesus->Name = L"GJesus";
			this->GJesus->Size = System::Drawing::Size(60, 60);
			this->GJesus->TabIndex = 42;
			this->GJesus->UseVisualStyleBackColor = true;
			this->GJesus->Click += gcnew System::EventHandler(this, &MyForm::GJesus_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(671, 920);
			this->Controls->Add(this->GJesus);
			this->Controls->Add(this->CBravo);
			this->Controls->Add(this->BSilva);
			this->Controls->Add(this->OZinchenko);
			this->Controls->Add(this->KWalker);
			this->Controls->Add(this->VKompany);
			this->Controls->Add(this->GK);
			this->Controls->Add(this->RW);
			this->Controls->Add(this->LW);
			this->Controls->Add(this->LST);
			this->Controls->Add(this->RST);
			this->Controls->Add(this->ST);
			this->Controls->Add(this->RightMid);
			this->Controls->Add(this->LM);
			this->Controls->Add(this->CAM);
			this->Controls->Add(this->CM);
			this->Controls->Add(this->CDM);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Positions);
			this->Controls->Add(this->RightBack);
			this->Controls->Add(this->LB);
			this->Controls->Add(this->CB);
			this->Controls->Add(this->RCB);
			this->Controls->Add(this->LCB);
			this->Controls->Add(this->IGundagon);
			this->Controls->Add(this->ResetB);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->ARight);
			this->Controls->Add(this->ADown);
			this->Controls->Add(this->AUp);
			this->Controls->Add(this->ALeft);
			this->Controls->Add(this->Ederson);
			this->Controls->Add(this->Fernandinho);
			this->Controls->Add(this->KDebruyne);
			this->Controls->Add(this->DSilva);
			this->Controls->Add(this->Rsterling);
			this->Controls->Add(this->NOtammendi);
			this->Controls->Add(this->LSane);
			this->Controls->Add(this->ALaporte);
			this->Controls->Add(this->SAguero);
			this->Controls->Add(this->JStones);
			this->Controls->Add(this->BMendy);
			this->Controls->Add(this->Field);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Field))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void BMendy_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
		e->Effect == DragDropEffects::Copy || e->Effect == DragDropEffects::Move;
	}
	private: System::Void ResetB_Click(System::Object^  sender, System::EventArgs^  e) {
		Reset();
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void AUp_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedPlayerUp();
}
private: System::Void ALeft_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedPlayerLeft();
}
private: System::Void ADown_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedPlayerDown();
}
private: System::Void ARight_Click(System::Object^  sender, System::EventArgs^  e) {
	SelectedPlayerRight();
}
private: System::Void KDebruyne_Click(System::Object^  sender, System::EventArgs^  e) {
	selected = "KDebruyne";
}
private: System::Void BMendy_Click(System::Object^  sender, System::EventArgs^  e) {
	selected = "BMendy";
}
private: System::Void LSane_Click(System::Object^  sender, System::EventArgs^  e) {
	selected = "LSane";
}
private: System::Void JStones_Click(System::Object^  sender, System::EventArgs^  e) {
	selected = "JStones";
}
private: System::Void DSilva_Click(System::Object^  sender, System::EventArgs^  e) {
	selected = "DSilva";
}
private: System::Void NOtammendi_Click(System::Object^  sender, System::EventArgs^  e) {
	selected = "NOtammendi";
}
private: System::Void SAguero_Click(System::Object^  sender, System::EventArgs^  e) {
	selected = "SAguero";
}
private: System::Void Fernandinho_Click(System::Object^  sender, System::EventArgs^  e) {
	selected = "Fernandinho";
}
private: System::Void Rsterling_Click(System::Object^  sender, System::EventArgs^  e) {
	selected = "Rsterling";
}
private: System::Void ALaporte_Click(System::Object^  sender, System::EventArgs^  e) {
	selected = "ALaporte";
}
private: System::Void Ederson_Click(System::Object^  sender, System::EventArgs^  e) {
	selected = "Ederson";
}
private: System::Void IGundagon_Click(System::Object^  sender, System::EventArgs^  e) {
	selected = "IGundagon";
}
private: System::Void VKompany_Click(System::Object^  sender, System::EventArgs^  e) {
	selected = "VKompany";
}
private: System::Void KWalker_Click(System::Object^  sender, System::EventArgs^  e) {
	selected = "KWalker";
}
private: System::Void OZinchenko_Click(System::Object^  sender, System::EventArgs^  e) {
	selected = "OZinchenko";
}
private: System::Void BSilva_Click(System::Object^  sender, System::EventArgs^  e) {
	selected = "BSilva";
}
private: System::Void CBravo_Click(System::Object^  sender, System::EventArgs^  e) {
	selected = "CBravo";
}
private: System::Void GJesus_Click(System::Object^  sender, System::EventArgs^  e) {
	selected = "GJesus";
}
private: System::Void LCB_Click(System::Object^  sender, System::EventArgs^  e) {
	Lcb();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Rcb();
}
private: System::Void CB_Click(System::Object^  sender, System::EventArgs^  e) {
	Cb();
}
private: System::Void LB_Click(System::Object^  sender, System::EventArgs^  e) {
	Lb();
}
private: System::Void RightBack_Click(System::Object^  sender, System::EventArgs^  e) {
	Rb();
}
private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	Cdm();
}
private: System::Void CM_Click(System::Object^  sender, System::EventArgs^  e) {
	Cm();
}
private: System::Void CAM_Click(System::Object^  sender, System::EventArgs^  e) {
	Cam();
}
private: System::Void LM_Click_2(System::Object^  sender, System::EventArgs^  e) {
	Lm();
}
private: System::Void RightMid_Click(System::Object^  sender, System::EventArgs^  e) {
	Rm();
}
private: System::Void ST_Click_2(System::Object^  sender, System::EventArgs^  e) {
	St();
}
private: System::Void RST_Click(System::Object^  sender, System::EventArgs^  e) {
	Rst();
}
private: System::Void LST_Click(System::Object^  sender, System::EventArgs^  e) {
	Lst();
}
private: System::Void LW_Click(System::Object^  sender, System::EventArgs^  e) {
	Lw();
}
private: System::Void RW_Click(System::Object^  sender, System::EventArgs^  e) {
	Rw();
}
private: System::Void GK_Click(System::Object^  sender, System::EventArgs^  e) {
	Gk();
}
};
}
