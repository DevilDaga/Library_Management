#pragma once
#include "FacultyUI.h"
#include "BooksUI.h"
#include "common.h"

namespace LibraryMgmt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainUI
	/// </summary>
	public ref class MainUI : public System::Windows::Forms::Form
	{
	public:

		FacultyUI ^facUI;
		BooksUI ^booksUI;

		MainUI(void)
		{
			InitializeComponent();
			facUI = gcnew FacultyUI ( );
			booksUI = gcnew BooksUI ( );
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btFaculty;
	private: System::Windows::Forms::Button^  btBooks;
	protected:

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
			this->btFaculty = ( gcnew System::Windows::Forms::Button ( ) );
			this->btBooks = ( gcnew System::Windows::Forms::Button ( ) );
			this->SuspendLayout ( );
			// 
			// btFaculty
			// 
			this->btFaculty->BackColor = System::Drawing::SystemColors::Control;
			this->btFaculty->Cursor = System::Windows::Forms::Cursors::Default;
			this->btFaculty->Location = System::Drawing::Point ( 12, 12 );
			this->btFaculty->Name = L"btFaculty";
			this->btFaculty->Size = System::Drawing::Size ( 193, 195 );
			this->btFaculty->TabIndex = 0;
			this->btFaculty->Text = L"Faculty";
			this->btFaculty->UseVisualStyleBackColor = false;
			this->btFaculty->Click += gcnew System::EventHandler ( this, &MainUI::btFaculty_Click );
			// 
			// btBooks
			// 
			this->btBooks->Location = System::Drawing::Point ( 211, 12 );
			this->btBooks->Name = L"btBooks";
			this->btBooks->Size = System::Drawing::Size ( 193, 195 );
			this->btBooks->TabIndex = 1;
			this->btBooks->Text = L"Books";
			this->btBooks->UseVisualStyleBackColor = false;
			this->btBooks->Click += gcnew System::EventHandler ( this, &MainUI::btBooks_Click );
			// 
			// MainUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF ( 6, 13 );
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size ( 421, 225 );
			this->Controls->Add ( this->btBooks );
			this->Controls->Add ( this->btFaculty );
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Name = L"MainUI";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Library Management";
			this->ResumeLayout ( false );

		}
#pragma endregion
	private: System::Void btFaculty_Click ( System::Object^  sender, System::EventArgs^  e )
	{
		if ( !facUI->Visible )
		{
			facUI = gcnew FacultyUI ( );
			facUI->Show ( );
		}
		facUI->Focus ( );
	}

	private: System::Void btBooks_Click ( System::Object^  sender, System::EventArgs^  e )
	{
		if ( !booksUI->Visible )
		{
			booksUI = gcnew BooksUI ( );
			booksUI->Show ( );
		}
		booksUI->Focus ( );
	}
	};
}
