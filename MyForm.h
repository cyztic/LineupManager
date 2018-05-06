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
		//used to hold current selected player
		String^ selected;

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
				KDebruyne->Top += 10;;
			}
			else if (selected == "Fernandinho")
			{
				Fernandinho->Top += 10;
			}
			else if (selected == "Ederson")
			{
				Ederson->Top += 10;
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
	private: System::Windows::Forms::Button^  button2;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->IGundagon = (gcnew System::Windows::Forms::Button());
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
			this->BMendy->Location = System::Drawing::Point(483, 33);
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
			this->JStones->Location = System::Drawing::Point(483, 99);
			this->JStones->Name = L"JStones";
			this->JStones->Size = System::Drawing::Size(60, 60);
			this->JStones->TabIndex = 2;
			this->JStones->UseVisualStyleBackColor = true;
			this->JStones->Click += gcnew System::EventHandler(this, &MyForm::JStones_Click);
			// 
			// SAguero
			// 
			this->SAguero->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SAguero.BackgroundImage")));
			this->SAguero->Location = System::Drawing::Point(483, 165);
			this->SAguero->Name = L"SAguero";
			this->SAguero->Size = System::Drawing::Size(60, 60);
			this->SAguero->TabIndex = 3;
			this->SAguero->UseVisualStyleBackColor = true;
			this->SAguero->Click += gcnew System::EventHandler(this, &MyForm::SAguero_Click);
			// 
			// ALaporte
			// 
			this->ALaporte->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ALaporte.BackgroundImage")));
			this->ALaporte->Location = System::Drawing::Point(483, 231);
			this->ALaporte->Name = L"ALaporte";
			this->ALaporte->Size = System::Drawing::Size(60, 60);
			this->ALaporte->TabIndex = 4;
			this->ALaporte->UseVisualStyleBackColor = true;
			this->ALaporte->Click += gcnew System::EventHandler(this, &MyForm::ALaporte_Click);
			// 
			// LSane
			// 
			this->LSane->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LSane.BackgroundImage")));
			this->LSane->Location = System::Drawing::Point(615, 33);
			this->LSane->Name = L"LSane";
			this->LSane->Size = System::Drawing::Size(60, 60);
			this->LSane->TabIndex = 5;
			this->LSane->UseVisualStyleBackColor = true;
			this->LSane->Click += gcnew System::EventHandler(this, &MyForm::LSane_Click);
			// 
			// NOtammendi
			// 
			this->NOtammendi->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"NOtammendi.BackgroundImage")));
			this->NOtammendi->Location = System::Drawing::Point(615, 99);
			this->NOtammendi->Name = L"NOtammendi";
			this->NOtammendi->Size = System::Drawing::Size(60, 60);
			this->NOtammendi->TabIndex = 6;
			this->NOtammendi->UseVisualStyleBackColor = true;
			this->NOtammendi->Click += gcnew System::EventHandler(this, &MyForm::NOtammendi_Click);
			// 
			// Rsterling
			// 
			this->Rsterling->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Rsterling.BackgroundImage")));
			this->Rsterling->Location = System::Drawing::Point(615, 165);
			this->Rsterling->Name = L"Rsterling";
			this->Rsterling->Size = System::Drawing::Size(60, 60);
			this->Rsterling->TabIndex = 7;
			this->Rsterling->UseVisualStyleBackColor = true;
			this->Rsterling->Click += gcnew System::EventHandler(this, &MyForm::Rsterling_Click);
			// 
			// DSilva
			// 
			this->DSilva->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DSilva.BackgroundImage")));
			this->DSilva->Location = System::Drawing::Point(549, 99);
			this->DSilva->Name = L"DSilva";
			this->DSilva->Size = System::Drawing::Size(60, 60);
			this->DSilva->TabIndex = 8;
			this->DSilva->UseVisualStyleBackColor = true;
			this->DSilva->Click += gcnew System::EventHandler(this, &MyForm::DSilva_Click);
			// 
			// KDebruyne
			// 
			this->KDebruyne->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"KDebruyne.BackgroundImage")));
			this->KDebruyne->Location = System::Drawing::Point(549, 33);
			this->KDebruyne->Name = L"KDebruyne";
			this->KDebruyne->Size = System::Drawing::Size(60, 60);
			this->KDebruyne->TabIndex = 9;
			this->KDebruyne->UseVisualStyleBackColor = true;
			this->KDebruyne->Click += gcnew System::EventHandler(this, &MyForm::KDebruyne_Click);
			// 
			// Fernandinho
			// 
			this->Fernandinho->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Fernandinho.BackgroundImage")));
			this->Fernandinho->Location = System::Drawing::Point(549, 165);
			this->Fernandinho->Name = L"Fernandinho";
			this->Fernandinho->Size = System::Drawing::Size(60, 60);
			this->Fernandinho->TabIndex = 10;
			this->Fernandinho->UseVisualStyleBackColor = true;
			this->Fernandinho->Click += gcnew System::EventHandler(this, &MyForm::Fernandinho_Click);
			// 
			// Ederson
			// 
			this->Ederson->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Ederson.BackgroundImage")));
			this->Ederson->Location = System::Drawing::Point(549, 231);
			this->Ederson->Name = L"Ederson";
			this->Ederson->Size = System::Drawing::Size(60, 60);
			this->Ederson->TabIndex = 11;
			this->Ederson->UseVisualStyleBackColor = true;
			this->Ederson->Click += gcnew System::EventHandler(this, &MyForm::Ederson_Click);
			// 
			// ALeft
			// 
			this->ALeft->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ALeft.BackgroundImage")));
			this->ALeft->Location = System::Drawing::Point(483, 588);
			this->ALeft->Name = L"ALeft";
			this->ALeft->Size = System::Drawing::Size(60, 60);
			this->ALeft->TabIndex = 12;
			this->ALeft->UseVisualStyleBackColor = true;
			this->ALeft->Click += gcnew System::EventHandler(this, &MyForm::ALeft_Click);
			// 
			// AUp
			// 
			this->AUp->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AUp.BackgroundImage")));
			this->AUp->Location = System::Drawing::Point(549, 523);
			this->AUp->Name = L"AUp";
			this->AUp->Size = System::Drawing::Size(60, 60);
			this->AUp->TabIndex = 13;
			this->AUp->UseVisualStyleBackColor = true;
			this->AUp->Click += gcnew System::EventHandler(this, &MyForm::AUp_Click);
			// 
			// ADown
			// 
			this->ADown->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ADown.BackgroundImage")));
			this->ADown->Location = System::Drawing::Point(549, 654);
			this->ADown->Name = L"ADown";
			this->ADown->Size = System::Drawing::Size(60, 60);
			this->ADown->TabIndex = 14;
			this->ADown->UseVisualStyleBackColor = true;
			this->ADown->Click += gcnew System::EventHandler(this, &MyForm::ADown_Click);
			// 
			// ARight
			// 
			this->ARight->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ARight.BackgroundImage")));
			this->ARight->Location = System::Drawing::Point(615, 588);
			this->ARight->Name = L"ARight";
			this->ARight->Size = System::Drawing::Size(60, 60);
			this->ARight->TabIndex = 15;
			this->ARight->UseVisualStyleBackColor = true;
			this->ARight->Click += gcnew System::EventHandler(this, &MyForm::ARight_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(483, 453);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 45);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Home";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(596, 453);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(79, 45);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// IGundagon
			// 
			this->IGundagon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"IGundagon.BackgroundImage")));
			this->IGundagon->Location = System::Drawing::Point(615, 231);
			this->IGundagon->Name = L"IGundagon";
			this->IGundagon->Size = System::Drawing::Size(60, 60);
			this->IGundagon->TabIndex = 18;
			this->IGundagon->UseVisualStyleBackColor = true;
			this->IGundagon->Click += gcnew System::EventHandler(this, &MyForm::IGundagon_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(731, 740);
			this->Controls->Add(this->IGundagon);
			this->Controls->Add(this->button2);
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

		}
#pragma endregion

	private: System::Void BMendy_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
		e->Effect == DragDropEffects::Copy || e->Effect == DragDropEffects::Move;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
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
};
}
