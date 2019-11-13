#pragma once
#include <msclr\marshal_cppstd.h>
#include "Files.h"
#include <fstream>

using namespace System::Threading;
using namespace System::Collections::Generic;
using namespace std;
using namespace System;
using namespace System::IO;
using namespace System::Text;
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			size = 0:
			ArregloArchivo = new Archivo*[size];
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  hospital_lbl;
	private: System::Windows::Forms::Label^  ruta_lbl;
	private: System::Windows::Forms::TextBox^  ruta_txt;
	protected:





	private: System::Windows::Forms::Label^  buscar_nombre_lbl;
	private: System::Windows::Forms::Label^  buscar_extension_lbl;
	private: System::Windows::Forms::Label^  buscar_tamano_lbl;
	private: System::Windows::Forms::Label^  buscar_fecha_lbl;




	private: System::Windows::Forms::Label^  colocar_lbl;
	private: System::Windows::Forms::TextBox^  buscar_fecha_txt;


	private: System::Windows::Forms::TextBox^  buscar_tamano_txt;
	private: System::Windows::Forms::TextBox^  buscar_extension_txt;
	private: System::Windows::Forms::TextBox^  buscar_nombre_txt;
	private: System::Windows::Forms::ListBox^  VerArchivos;



	private: System::Windows::Forms::Button^  buscar_btn;
	private: System::Windows::Forms::Button^  buscar_buscar_btn;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  igual_txt;
	private: System::Windows::Forms::TextBox^  menor_txt;
	private: System::Windows::Forms::TextBox^  mayor_txt;
	private: System::Windows::Forms::TextBox^  contiene_txt;
	private: System::Windows::Forms::TextBox^  finaliza_txt;
	private: System::Windows::Forms::TextBox^  empieza_txt;
	private: System::Windows::Forms::Button^  filtrar_btn;
	private: System::Windows::Forms::Button^  button3;
	public: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private:
		int size;
		Archivo** ArregloArchivo;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		System::ComponentModel::Container ^components;

			 //array<FileInfo^> arreglo;
		/// </summary>
		//System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->hospital_lbl = (gcnew System::Windows::Forms::Label());
			this->ruta_lbl = (gcnew System::Windows::Forms::Label());
			this->ruta_txt = (gcnew System::Windows::Forms::TextBox());
			this->buscar_nombre_lbl = (gcnew System::Windows::Forms::Label());
			this->buscar_extension_lbl = (gcnew System::Windows::Forms::Label());
			this->buscar_tamano_lbl = (gcnew System::Windows::Forms::Label());
			this->buscar_fecha_lbl = (gcnew System::Windows::Forms::Label());
			this->colocar_lbl = (gcnew System::Windows::Forms::Label());
			this->buscar_fecha_txt = (gcnew System::Windows::Forms::TextBox());
			this->buscar_tamano_txt = (gcnew System::Windows::Forms::TextBox());
			this->buscar_extension_txt = (gcnew System::Windows::Forms::TextBox());
			this->buscar_nombre_txt = (gcnew System::Windows::Forms::TextBox());
			this->VerArchivos = (gcnew System::Windows::Forms::ListBox());
			this->buscar_btn = (gcnew System::Windows::Forms::Button());
			this->buscar_buscar_btn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->igual_txt = (gcnew System::Windows::Forms::TextBox());
			this->menor_txt = (gcnew System::Windows::Forms::TextBox());
			this->mayor_txt = (gcnew System::Windows::Forms::TextBox());
			this->contiene_txt = (gcnew System::Windows::Forms::TextBox());
			this->finaliza_txt = (gcnew System::Windows::Forms::TextBox());
			this->empieza_txt = (gcnew System::Windows::Forms::TextBox());
			this->filtrar_btn = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->SuspendLayout();
			// 
			// hospital_lbl
			// 
			this->hospital_lbl->AutoSize = true;
			this->hospital_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hospital_lbl->Location = System::Drawing::Point(575, 33);
			this->hospital_lbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->hospital_lbl->Name = L"hospital_lbl";
			this->hospital_lbl->Size = System::Drawing::Size(240, 31);
			this->hospital_lbl->TabIndex = 0;
			this->hospital_lbl->Text = L"Hospital Good Hope";
			this->hospital_lbl->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// ruta_lbl
			// 
			this->ruta_lbl->AutoSize = true;
			this->ruta_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ruta_lbl->Location = System::Drawing::Point(75, 106);
			this->ruta_lbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ruta_lbl->Name = L"ruta_lbl";
			this->ruta_lbl->Size = System::Drawing::Size(70, 27);
			this->ruta_lbl->TabIndex = 1;
			this->ruta_lbl->Text = L"Ruta: ";
			// 
			// ruta_txt
			// 
			this->ruta_txt->Location = System::Drawing::Point(189, 106);
			this->ruta_txt->Margin = System::Windows::Forms::Padding(4);
			this->ruta_txt->Name = L"ruta_txt";
			this->ruta_txt->Size = System::Drawing::Size(423, 22);
			this->ruta_txt->TabIndex = 2;
			// 
			// buscar_nombre_lbl
			// 
			this->buscar_nombre_lbl->AutoSize = true;
			this->buscar_nombre_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buscar_nombre_lbl->Location = System::Drawing::Point(824, 158);
			this->buscar_nombre_lbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->buscar_nombre_lbl->Name = L"buscar_nombre_lbl";
			this->buscar_nombre_lbl->Size = System::Drawing::Size(102, 27);
			this->buscar_nombre_lbl->TabIndex = 5;
			this->buscar_nombre_lbl->Text = L"Nombre: ";
			// 
			// buscar_extension_lbl
			// 
			this->buscar_extension_lbl->AutoSize = true;
			this->buscar_extension_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buscar_extension_lbl->Location = System::Drawing::Point(824, 202);
			this->buscar_extension_lbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->buscar_extension_lbl->Name = L"buscar_extension_lbl";
			this->buscar_extension_lbl->Size = System::Drawing::Size(120, 27);
			this->buscar_extension_lbl->TabIndex = 6;
			this->buscar_extension_lbl->Text = L"Extensión: ";
			// 
			// buscar_tamano_lbl
			// 
			this->buscar_tamano_lbl->AutoSize = true;
			this->buscar_tamano_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buscar_tamano_lbl->Location = System::Drawing::Point(824, 245);
			this->buscar_tamano_lbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->buscar_tamano_lbl->Name = L"buscar_tamano_lbl";
			this->buscar_tamano_lbl->Size = System::Drawing::Size(94, 27);
			this->buscar_tamano_lbl->TabIndex = 7;
			this->buscar_tamano_lbl->Text = L"Tamaño:";
			// 
			// buscar_fecha_lbl
			// 
			this->buscar_fecha_lbl->AutoSize = true;
			this->buscar_fecha_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buscar_fecha_lbl->Location = System::Drawing::Point(824, 292);
			this->buscar_fecha_lbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->buscar_fecha_lbl->Name = L"buscar_fecha_lbl";
			this->buscar_fecha_lbl->Size = System::Drawing::Size(198, 27);
			this->buscar_fecha_lbl->TabIndex = 8;
			this->buscar_fecha_lbl->Text = L"Fecha de Creación:";
			// 
			// colocar_lbl
			// 
			this->colocar_lbl->AutoSize = true;
			this->colocar_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->colocar_lbl->Location = System::Drawing::Point(825, 106);
			this->colocar_lbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->colocar_lbl->Name = L"colocar_lbl";
			this->colocar_lbl->Size = System::Drawing::Size(350, 27);
			this->colocar_lbl->TabIndex = 9;
			this->colocar_lbl->Text = L"Colocar datos del archivo a buscar:";
			// 
			// buscar_fecha_txt
			// 
			this->buscar_fecha_txt->Location = System::Drawing::Point(1037, 292);
			this->buscar_fecha_txt->Margin = System::Windows::Forms::Padding(4);
			this->buscar_fecha_txt->Name = L"buscar_fecha_txt";
			this->buscar_fecha_txt->Size = System::Drawing::Size(256, 22);
			this->buscar_fecha_txt->TabIndex = 10;
			// 
			// buscar_tamano_txt
			// 
			this->buscar_tamano_txt->Location = System::Drawing::Point(1037, 245);
			this->buscar_tamano_txt->Margin = System::Windows::Forms::Padding(4);
			this->buscar_tamano_txt->Name = L"buscar_tamano_txt";
			this->buscar_tamano_txt->Size = System::Drawing::Size(256, 22);
			this->buscar_tamano_txt->TabIndex = 11;
			// 
			// buscar_extension_txt
			// 
			this->buscar_extension_txt->Location = System::Drawing::Point(1037, 204);
			this->buscar_extension_txt->Margin = System::Windows::Forms::Padding(4);
			this->buscar_extension_txt->Name = L"buscar_extension_txt";
			this->buscar_extension_txt->Size = System::Drawing::Size(256, 22);
			this->buscar_extension_txt->TabIndex = 12;
			// 
			// buscar_nombre_txt
			// 
			this->buscar_nombre_txt->Location = System::Drawing::Point(1037, 160);
			this->buscar_nombre_txt->Margin = System::Windows::Forms::Padding(4);
			this->buscar_nombre_txt->Name = L"buscar_nombre_txt";
			this->buscar_nombre_txt->Size = System::Drawing::Size(256, 22);
			this->buscar_nombre_txt->TabIndex = 13;
			// 
			// VerArchivos
			// 
			this->VerArchivos->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->VerArchivos->FormattingEnabled = true;
			this->VerArchivos->ItemHeight = 16;
			this->VerArchivos->Location = System::Drawing::Point(44, 204);
			this->VerArchivos->Margin = System::Windows::Forms::Padding(4);
			this->VerArchivos->Name = L"VerArchivos";
			this->VerArchivos->Size = System::Drawing::Size(707, 402);
			this->VerArchivos->TabIndex = 16;
			this->VerArchivos->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::VerArchivos_SelectedIndexChanged);
			// 
			// buscar_btn
			// 
			this->buscar_btn->Location = System::Drawing::Point(639, 106);
			this->buscar_btn->Margin = System::Windows::Forms::Padding(4);
			this->buscar_btn->Name = L"buscar_btn";
			this->buscar_btn->Size = System::Drawing::Size(100, 28);
			this->buscar_btn->TabIndex = 18;
			this->buscar_btn->Text = L"Buscar";
			this->buscar_btn->UseVisualStyleBackColor = true;
			this->buscar_btn->Click += gcnew System::EventHandler(this, &MyForm::buscar_btn_Click);
			// 
			// buscar_buscar_btn
			// 
			this->buscar_buscar_btn->Location = System::Drawing::Point(1195, 348);
			this->buscar_buscar_btn->Margin = System::Windows::Forms::Padding(4);
			this->buscar_buscar_btn->Name = L"buscar_buscar_btn";
			this->buscar_buscar_btn->Size = System::Drawing::Size(100, 28);
			this->buscar_buscar_btn->TabIndex = 19;
			this->buscar_buscar_btn->Text = L"Buscar";
			this->buscar_buscar_btn->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(908, 454);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Nombre";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1171, 454);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(124, 28);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Tamaño (MB)";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(828, 411);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 27);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Filtrar por:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(833, 503);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 17);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Empieza con:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(833, 559);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 17);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Finaliza con:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(833, 614);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 17);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Contiene:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1108, 503);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 17);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Mayor a:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1108, 559);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 17);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Menor a:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1108, 614);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(54, 17);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Igual a:";
			// 
			// igual_txt
			// 
			this->igual_txt->Location = System::Drawing::Point(1192, 610);
			this->igual_txt->Margin = System::Windows::Forms::Padding(4);
			this->igual_txt->Name = L"igual_txt";
			this->igual_txt->Size = System::Drawing::Size(132, 22);
			this->igual_txt->TabIndex = 29;
			// 
			// menor_txt
			// 
			this->menor_txt->Location = System::Drawing::Point(1192, 559);
			this->menor_txt->Margin = System::Windows::Forms::Padding(4);
			this->menor_txt->Name = L"menor_txt";
			this->menor_txt->Size = System::Drawing::Size(132, 22);
			this->menor_txt->TabIndex = 30;
			// 
			// mayor_txt
			// 
			this->mayor_txt->Location = System::Drawing::Point(1192, 503);
			this->mayor_txt->Margin = System::Windows::Forms::Padding(4);
			this->mayor_txt->Name = L"mayor_txt";
			this->mayor_txt->Size = System::Drawing::Size(132, 22);
			this->mayor_txt->TabIndex = 31;
			// 
			// contiene_txt
			// 
			this->contiene_txt->Location = System::Drawing::Point(936, 610);
			this->contiene_txt->Margin = System::Windows::Forms::Padding(4);
			this->contiene_txt->Name = L"contiene_txt";
			this->contiene_txt->Size = System::Drawing::Size(132, 22);
			this->contiene_txt->TabIndex = 32;
			// 
			// finaliza_txt
			// 
			this->finaliza_txt->Location = System::Drawing::Point(936, 555);
			this->finaliza_txt->Margin = System::Windows::Forms::Padding(4);
			this->finaliza_txt->Name = L"finaliza_txt";
			this->finaliza_txt->Size = System::Drawing::Size(132, 22);
			this->finaliza_txt->TabIndex = 33;
			// 
			// empieza_txt
			// 
			this->empieza_txt->Location = System::Drawing::Point(936, 500);
			this->empieza_txt->Margin = System::Windows::Forms::Padding(4);
			this->empieza_txt->Name = L"empieza_txt";
			this->empieza_txt->Size = System::Drawing::Size(132, 22);
			this->empieza_txt->TabIndex = 34;
			// 
			// filtrar_btn
			// 
			this->filtrar_btn->Location = System::Drawing::Point(1215, 668);
			this->filtrar_btn->Margin = System::Windows::Forms::Padding(4);
			this->filtrar_btn->Name = L"filtrar_btn";
			this->filtrar_btn->Size = System::Drawing::Size(100, 28);
			this->filtrar_btn->TabIndex = 35;
			this->filtrar_btn->Text = L"Filtrar";
			this->filtrar_btn->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(44, 155);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(166, 42);
			this->button3->TabIndex = 36;
			this->button3->Text = L"Ordenar Asc./Des.";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1341, 754);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->filtrar_btn);
			this->Controls->Add(this->empieza_txt);
			this->Controls->Add(this->finaliza_txt);
			this->Controls->Add(this->contiene_txt);
			this->Controls->Add(this->mayor_txt);
			this->Controls->Add(this->menor_txt);
			this->Controls->Add(this->igual_txt);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->buscar_buscar_btn);
			this->Controls->Add(this->buscar_btn);
			this->Controls->Add(this->VerArchivos);
			this->Controls->Add(this->buscar_nombre_txt);
			this->Controls->Add(this->buscar_extension_txt);
			this->Controls->Add(this->buscar_tamano_txt);
			this->Controls->Add(this->buscar_fecha_txt);
			this->Controls->Add(this->colocar_lbl);
			this->Controls->Add(this->buscar_fecha_lbl);
			this->Controls->Add(this->buscar_tamano_lbl);
			this->Controls->Add(this->buscar_extension_lbl);
			this->Controls->Add(this->buscar_nombre_lbl);
			this->Controls->Add(this->ruta_txt);
			this->Controls->Add(this->ruta_lbl);
			this->Controls->Add(this->hospital_lbl);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L".";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
string ConvertirString(String^ ss)
	{
		return string(msclr::interop::marshal_as<std::string>(ss));
	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
{		
}
private: System::Void VerArchivos_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void buscar_btn_Click(System::Object^  sender, System::EventArgs^  e) 
private: System::Void buscar_btn_Click(System::Object^  sender, System::EventArgs^  e)
	{
		ofstream EscribirRuta;
		string LineaLectora;
		EscribirRuta.open("RutaMadre.txt", ios::app);
		if (EscribirRuta.is_open())
		{
			ifstream leerRuta;
			string texto;
			leerRuta.open("RutaMadre.txt", ios::in);
			while (!leerRuta.eof())
			{
				getline(leerRuta, texto);
				cout << texto << endl;
			}
			if (texto != "")
			{
				String^ str2 = gcnew String(texto.c_str());
				VerArchivos->Items->Clear();
				cli::array<String^>^  files = Directory::GetFiles(str2);

				for each(String^ file in files)
				{
					VerArchivos->Items->Add(file);
					FileInfo^ archivo = gcnew FileInfo(file);
					size++;
					ArregloArchivo[size - 1] = new HistoriasClinicas(ConvertirString(archivo->Name), archivo->Length, ConvertirString(archivo->Extension),
						ConvertirString(Convert::ToString(archivo->CreationTime)), ConvertirString(file));
				}
			}
			else
			{
				if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					EscribirRuta << ConvertirString(folderBrowserDialog1->SelectedPath);  //guarda la ruta por primera vez 
					VerArchivos->Items->Clear();
					cli::array<String^>^  files = Directory::GetFiles(folderBrowserDialog1->SelectedPath);

					for each(String^ file in files)
					{
						VerArchivos->Items->Add(file);
						FileInfo^ archivo = gcnew FileInfo(file);
						size++;
						ArregloArchivo[size - 1] = new HistoriasClinicas(ConvertirString(archivo->Name), archivo->Length, ConvertirString(archivo->Extension),
							ConvertirString(Convert::ToString(archivo->CreationTime)), ConvertirString(file));
					}
				}
			}
		}
	}


private: System::Void folderBrowserDialog1_HelpRequest(System::Object^  sender, System::EventArgs^  e) {
}
};
}
