#pragma once
#include "HistoriaClinica.h"
#include "HashTabla.h"
#include "Arbol.h"
#include <fstream>
#include <msclr\marshal_cppstd.h>
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
			size = 0;
			ArregloArchivo = new HistoriasClinicas*[size];
			objArbol = new ArbolB<HistoriasClinicas>();
			tablaAccesos = new HashTabla(4);

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
	private: System::Windows::Forms::Button^  nombre_btn;
	private: System::Windows::Forms::Button^  filtrarhc_nombre_btn;
	private: System::Windows::Forms::Button^  filtrarhc_tam_btn;



	private: System::Windows::Forms::Label^  filtrar_filtrarpor_lbl;
	private: System::Windows::Forms::Label^  empieza_lbl;
	private: System::Windows::Forms::Label^  finaliza_lbl;
	private: System::Windows::Forms::Label^  contiene_lbl;
	private: System::Windows::Forms::Label^  mayor_lbl;
	private: System::Windows::Forms::Label^  menor_lbl;
	private: System::Windows::Forms::Label^  igual_lbl;



	private: System::Windows::Forms::TextBox^  igual_txt;
	private: System::Windows::Forms::TextBox^  menor_txt;
	private: System::Windows::Forms::TextBox^  mayor_txt;
	private: System::Windows::Forms::TextBox^  contiene_txt;
	private: System::Windows::Forms::TextBox^  finaliza_txt;
	private: System::Windows::Forms::TextBox^  empieza_txt;
	private: System::Windows::Forms::Button^  filtrar_btn;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::Label^  usuario_lbl;

	private: System::Windows::Forms::Label^  iniciar_sesion_lbl;
	private: System::Windows::Forms::Label^  contraseña_lbl;
	private: System::Windows::Forms::TextBox^  contraseña_txt;




	private: System::Windows::Forms::TextBox^  usuario_txt;

	private: System::Windows::Forms::Button^  iniciar_sesion_btn;
	private: System::Windows::Forms::Label^  menu_lbl;
	private: System::Windows::Forms::Button^  buscarhc_btn;
	private: System::Windows::Forms::Button^  filtrarhc_btn;
	private: System::Windows::Forms::Button^  Regresar_menu_btn;
	private: System::Windows::Forms::Label^  buscar_buscarpor_lbl;
	private: System::Windows::Forms::Button^  buscarhc_nombre_btn;
	private: System::Windows::Forms::Button^  buscarhc_extension_btn;
	private: System::Windows::Forms::Button^  buscarhc_tam_btn;
	private: System::Windows::Forms::Button^  buscarhc_fecha_btn;
	private: System::Windows::Forms::Button^  buscarhc_dni_btn;
	private: System::Windows::Forms::Button^  regresar_buscarpor_btn;


	private: System::Windows::Forms::Button^  regresar_dato_btn;
	private: System::Windows::Forms::Button^  extension_btn;
	private: System::Windows::Forms::Button^  tam_btn;
	private: System::Windows::Forms::Button^  fecha_btn;
	private: System::Windows::Forms::Button^  dni_btn;
	private: System::Windows::Forms::Label^  buscar_dni_lbl;
	private: System::Windows::Forms::TextBox^  buscar_dni_txt;
	private: System::Windows::Forms::Button^  regresar_filtrarnombre_btn;
	private: System::Windows::Forms::Button^  regresar_filtrartam_btn;
	private: System::Windows::Forms::Button^  filtrarnombre_btn;
	private: System::Windows::Forms::Button^  filtrartam_btn;
	private: System::Windows::Forms::Button^  regresar_filtrarname_btn;
	private: System::Windows::Forms::Button^  regresar_filtrarsize_btn;
	private: System::Windows::Forms::Label^  hcfiltrados_lbl;



	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		int size;
		HistoriasClinicas** ArregloArchivo;
		ArbolB<HistoriasClinicas>*objArbol;
		HashTabla* tablaAccesos;

private: System::Windows::Forms::Button^  ordenar_nombre_btn;
private: System::Windows::Forms::Button^  ordenar_tam_btn;



		/// </summary>
		System::ComponentModel::Container ^components;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->hospital_lbl = (gcnew System::Windows::Forms::Label());
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
			this->nombre_btn = (gcnew System::Windows::Forms::Button());
			this->filtrarhc_nombre_btn = (gcnew System::Windows::Forms::Button());
			this->filtrarhc_tam_btn = (gcnew System::Windows::Forms::Button());
			this->filtrar_filtrarpor_lbl = (gcnew System::Windows::Forms::Label());
			this->empieza_lbl = (gcnew System::Windows::Forms::Label());
			this->finaliza_lbl = (gcnew System::Windows::Forms::Label());
			this->contiene_lbl = (gcnew System::Windows::Forms::Label());
			this->mayor_lbl = (gcnew System::Windows::Forms::Label());
			this->menor_lbl = (gcnew System::Windows::Forms::Label());
			this->igual_lbl = (gcnew System::Windows::Forms::Label());
			this->igual_txt = (gcnew System::Windows::Forms::TextBox());
			this->menor_txt = (gcnew System::Windows::Forms::TextBox());
			this->mayor_txt = (gcnew System::Windows::Forms::TextBox());
			this->contiene_txt = (gcnew System::Windows::Forms::TextBox());
			this->finaliza_txt = (gcnew System::Windows::Forms::TextBox());
			this->empieza_txt = (gcnew System::Windows::Forms::TextBox());
			this->filtrar_btn = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->usuario_lbl = (gcnew System::Windows::Forms::Label());
			this->iniciar_sesion_lbl = (gcnew System::Windows::Forms::Label());
			this->contraseña_lbl = (gcnew System::Windows::Forms::Label());
			this->contraseña_txt = (gcnew System::Windows::Forms::TextBox());
			this->usuario_txt = (gcnew System::Windows::Forms::TextBox());
			this->iniciar_sesion_btn = (gcnew System::Windows::Forms::Button());
			this->menu_lbl = (gcnew System::Windows::Forms::Label());
			this->buscarhc_btn = (gcnew System::Windows::Forms::Button());
			this->filtrarhc_btn = (gcnew System::Windows::Forms::Button());
			this->Regresar_menu_btn = (gcnew System::Windows::Forms::Button());
			this->buscar_buscarpor_lbl = (gcnew System::Windows::Forms::Label());
			this->buscarhc_nombre_btn = (gcnew System::Windows::Forms::Button());
			this->buscarhc_extension_btn = (gcnew System::Windows::Forms::Button());
			this->buscarhc_tam_btn = (gcnew System::Windows::Forms::Button());
			this->buscarhc_fecha_btn = (gcnew System::Windows::Forms::Button());
			this->buscarhc_dni_btn = (gcnew System::Windows::Forms::Button());
			this->regresar_buscarpor_btn = (gcnew System::Windows::Forms::Button());
			this->regresar_dato_btn = (gcnew System::Windows::Forms::Button());
			this->extension_btn = (gcnew System::Windows::Forms::Button());
			this->tam_btn = (gcnew System::Windows::Forms::Button());
			this->fecha_btn = (gcnew System::Windows::Forms::Button());
			this->dni_btn = (gcnew System::Windows::Forms::Button());
			this->buscar_dni_lbl = (gcnew System::Windows::Forms::Label());
			this->buscar_dni_txt = (gcnew System::Windows::Forms::TextBox());
			this->regresar_filtrarnombre_btn = (gcnew System::Windows::Forms::Button());
			this->regresar_filtrartam_btn = (gcnew System::Windows::Forms::Button());
			this->filtrarnombre_btn = (gcnew System::Windows::Forms::Button());
			this->filtrartam_btn = (gcnew System::Windows::Forms::Button());
			this->regresar_filtrarname_btn = (gcnew System::Windows::Forms::Button());
			this->regresar_filtrarsize_btn = (gcnew System::Windows::Forms::Button());
			this->hcfiltrados_lbl = (gcnew System::Windows::Forms::Label());
			this->ordenar_nombre_btn = (gcnew System::Windows::Forms::Button());
			this->ordenar_tam_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// hospital_lbl
			// 
			this->hospital_lbl->AutoSize = true;
			this->hospital_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hospital_lbl->Location = System::Drawing::Point(207, 32);
			this->hospital_lbl->Name = L"hospital_lbl";
			this->hospital_lbl->Size = System::Drawing::Size(253, 33);
			this->hospital_lbl->TabIndex = 0;
			this->hospital_lbl->Text = L"Hospital Santa Maria";
			this->hospital_lbl->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// buscar_nombre_lbl
			// 
			this->buscar_nombre_lbl->AutoSize = true;
			this->buscar_nombre_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buscar_nombre_lbl->Location = System::Drawing::Point(85, 170);
			this->buscar_nombre_lbl->Name = L"buscar_nombre_lbl";
			this->buscar_nombre_lbl->Size = System::Drawing::Size(89, 23);
			this->buscar_nombre_lbl->TabIndex = 5;
			this->buscar_nombre_lbl->Text = L"Nombre: ";
			this->buscar_nombre_lbl->Visible = false;
			// 
			// buscar_extension_lbl
			// 
			this->buscar_extension_lbl->AutoSize = true;
			this->buscar_extension_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buscar_extension_lbl->Location = System::Drawing::Point(85, 171);
			this->buscar_extension_lbl->Name = L"buscar_extension_lbl";
			this->buscar_extension_lbl->Size = System::Drawing::Size(104, 23);
			this->buscar_extension_lbl->TabIndex = 6;
			this->buscar_extension_lbl->Text = L"Extensión: ";
			this->buscar_extension_lbl->Visible = false;
			// 
			// buscar_tamano_lbl
			// 
			this->buscar_tamano_lbl->AutoSize = true;
			this->buscar_tamano_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buscar_tamano_lbl->Location = System::Drawing::Point(85, 171);
			this->buscar_tamano_lbl->Name = L"buscar_tamano_lbl";
			this->buscar_tamano_lbl->Size = System::Drawing::Size(82, 23);
			this->buscar_tamano_lbl->TabIndex = 7;
			this->buscar_tamano_lbl->Text = L"Tamaño:";
			this->buscar_tamano_lbl->Visible = false;
			// 
			// buscar_fecha_lbl
			// 
			this->buscar_fecha_lbl->AutoSize = true;
			this->buscar_fecha_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F));
			this->buscar_fecha_lbl->Location = System::Drawing::Point(85, 169);
			this->buscar_fecha_lbl->Name = L"buscar_fecha_lbl";
			this->buscar_fecha_lbl->Size = System::Drawing::Size(169, 23);
			this->buscar_fecha_lbl->TabIndex = 8;
			this->buscar_fecha_lbl->Text = L"Fecha de Creación:";
			this->buscar_fecha_lbl->Visible = false;
			// 
			// colocar_lbl
			// 
			this->colocar_lbl->AutoSize = true;
			this->colocar_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->colocar_lbl->Location = System::Drawing::Point(84, 128);
			this->colocar_lbl->Name = L"colocar_lbl";
			this->colocar_lbl->Size = System::Drawing::Size(436, 27);
			this->colocar_lbl->TabIndex = 9;
			this->colocar_lbl->Text = L"Colocar dato de la Historia Clínica a buscar:";
			this->colocar_lbl->Visible = false;
			this->colocar_lbl->Click += gcnew System::EventHandler(this, &MyForm::colocar_lbl_Click);
			// 
			// buscar_fecha_txt
			// 
			this->buscar_fecha_txt->Location = System::Drawing::Point(260, 172);
			this->buscar_fecha_txt->Name = L"buscar_fecha_txt";
			this->buscar_fecha_txt->Size = System::Drawing::Size(215, 20);
			this->buscar_fecha_txt->TabIndex = 10;
			this->buscar_fecha_txt->Visible = false;
			// 
			// buscar_tamano_txt
			// 
			this->buscar_tamano_txt->Location = System::Drawing::Point(195, 172);
			this->buscar_tamano_txt->Name = L"buscar_tamano_txt";
			this->buscar_tamano_txt->Size = System::Drawing::Size(280, 20);
			this->buscar_tamano_txt->TabIndex = 11;
			this->buscar_tamano_txt->Visible = false;
			// 
			// buscar_extension_txt
			// 
			this->buscar_extension_txt->Location = System::Drawing::Point(195, 172);
			this->buscar_extension_txt->Name = L"buscar_extension_txt";
			this->buscar_extension_txt->Size = System::Drawing::Size(280, 20);
			this->buscar_extension_txt->TabIndex = 12;
			this->buscar_extension_txt->Visible = false;
			// 
			// buscar_nombre_txt
			// 
			this->buscar_nombre_txt->Location = System::Drawing::Point(195, 172);
			this->buscar_nombre_txt->Name = L"buscar_nombre_txt";
			this->buscar_nombre_txt->Size = System::Drawing::Size(280, 20);
			this->buscar_nombre_txt->TabIndex = 13;
			this->buscar_nombre_txt->Visible = false;
			// 
			// VerArchivos
			// 
			this->VerArchivos->FormattingEnabled = true;
			this->VerArchivos->Location = System::Drawing::Point(89, 200);
			this->VerArchivos->Name = L"VerArchivos";
			this->VerArchivos->Size = System::Drawing::Size(483, 264);
			this->VerArchivos->TabIndex = 16;
			this->VerArchivos->Visible = false;
			this->VerArchivos->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::VerArchivos_SelectedIndexChanged);
			// 
			// buscar_btn
			// 
			this->buscar_btn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buscar_btn->Location = System::Drawing::Point(188, 200);
			this->buscar_btn->Name = L"buscar_btn";
			this->buscar_btn->Size = System::Drawing::Size(285, 58);
			this->buscar_btn->TabIndex = 18;
			this->buscar_btn->Text = L"Seleccionar ruta";
			this->buscar_btn->UseVisualStyleBackColor = true;
			this->buscar_btn->Visible = false;
			this->buscar_btn->Click += gcnew System::EventHandler(this, &MyForm::buscar_btn_Click);
			// 
			// nombre_btn
			// 
			this->nombre_btn->Location = System::Drawing::Point(497, 170);
			this->nombre_btn->Name = L"nombre_btn";
			this->nombre_btn->Size = System::Drawing::Size(75, 23);
			this->nombre_btn->TabIndex = 19;
			this->nombre_btn->Text = L"Buscar";
			this->nombre_btn->UseVisualStyleBackColor = true;
			this->nombre_btn->Visible = false;
			this->nombre_btn->Click += gcnew System::EventHandler(this, &MyForm::nombre_btn_Click);
			// 
			// filtrarhc_nombre_btn
			// 
			this->filtrarhc_nombre_btn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->filtrarhc_nombre_btn->Location = System::Drawing::Point(260, 223);
			this->filtrarhc_nombre_btn->Name = L"filtrarhc_nombre_btn";
			this->filtrarhc_nombre_btn->Size = System::Drawing::Size(130, 41);
			this->filtrarhc_nombre_btn->TabIndex = 20;
			this->filtrarhc_nombre_btn->Text = L"Nombre";
			this->filtrarhc_nombre_btn->UseVisualStyleBackColor = true;
			this->filtrarhc_nombre_btn->Visible = false;
			this->filtrarhc_nombre_btn->Click += gcnew System::EventHandler(this, &MyForm::filtrarhc_nombre_btn_Click);
			// 
			// filtrarhc_tam_btn
			// 
			this->filtrarhc_tam_btn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->filtrarhc_tam_btn->Location = System::Drawing::Point(260, 328);
			this->filtrarhc_tam_btn->Name = L"filtrarhc_tam_btn";
			this->filtrarhc_tam_btn->Size = System::Drawing::Size(129, 41);
			this->filtrarhc_tam_btn->TabIndex = 21;
			this->filtrarhc_tam_btn->Text = L"Tamaño";
			this->filtrarhc_tam_btn->UseVisualStyleBackColor = true;
			this->filtrarhc_tam_btn->Visible = false;
			this->filtrarhc_tam_btn->Click += gcnew System::EventHandler(this, &MyForm::filtrarhc_tam_btn_Click);
			// 
			// filtrar_filtrarpor_lbl
			// 
			this->filtrar_filtrarpor_lbl->AutoSize = true;
			this->filtrar_filtrarpor_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->filtrar_filtrarpor_lbl->Location = System::Drawing::Point(266, 128);
			this->filtrar_filtrarpor_lbl->Name = L"filtrar_filtrarpor_lbl";
			this->filtrar_filtrarpor_lbl->Size = System::Drawing::Size(115, 27);
			this->filtrar_filtrarpor_lbl->TabIndex = 22;
			this->filtrar_filtrarpor_lbl->Text = L"Filtrar por:";
			this->filtrar_filtrarpor_lbl->Visible = false;
			this->filtrar_filtrarpor_lbl->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// empieza_lbl
			// 
			this->empieza_lbl->AutoSize = true;
			this->empieza_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->empieza_lbl->Location = System::Drawing::Point(152, 172);
			this->empieza_lbl->Name = L"empieza_lbl";
			this->empieza_lbl->Size = System::Drawing::Size(142, 27);
			this->empieza_lbl->TabIndex = 23;
			this->empieza_lbl->Text = L"Empieza con:";
			this->empieza_lbl->Visible = false;
			this->empieza_lbl->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// finaliza_lbl
			// 
			this->finaliza_lbl->AutoSize = true;
			this->finaliza_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->finaliza_lbl->Location = System::Drawing::Point(152, 270);
			this->finaliza_lbl->Name = L"finaliza_lbl";
			this->finaliza_lbl->Size = System::Drawing::Size(134, 27);
			this->finaliza_lbl->TabIndex = 24;
			this->finaliza_lbl->Text = L"Finaliza con:";
			this->finaliza_lbl->Visible = false;
			// 
			// contiene_lbl
			// 
			this->contiene_lbl->AutoSize = true;
			this->contiene_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->contiene_lbl->Location = System::Drawing::Point(156, 369);
			this->contiene_lbl->Name = L"contiene_lbl";
			this->contiene_lbl->Size = System::Drawing::Size(105, 27);
			this->contiene_lbl->TabIndex = 25;
			this->contiene_lbl->Text = L"Contiene:";
			this->contiene_lbl->Visible = false;
			// 
			// mayor_lbl
			// 
			this->mayor_lbl->AutoSize = true;
			this->mayor_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->mayor_lbl->Location = System::Drawing::Point(156, 172);
			this->mayor_lbl->Name = L"mayor_lbl";
			this->mayor_lbl->Size = System::Drawing::Size(99, 27);
			this->mayor_lbl->TabIndex = 26;
			this->mayor_lbl->Text = L"Mayor a:";
			this->mayor_lbl->Visible = false;
			// 
			// menor_lbl
			// 
			this->menor_lbl->AutoSize = true;
			this->menor_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->menor_lbl->Location = System::Drawing::Point(156, 271);
			this->menor_lbl->Name = L"menor_lbl";
			this->menor_lbl->Size = System::Drawing::Size(99, 27);
			this->menor_lbl->TabIndex = 27;
			this->menor_lbl->Text = L"Menor a:";
			this->menor_lbl->Visible = false;
			// 
			// igual_lbl
			// 
			this->igual_lbl->AutoSize = true;
			this->igual_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->igual_lbl->Location = System::Drawing::Point(156, 369);
			this->igual_lbl->Name = L"igual_lbl";
			this->igual_lbl->Size = System::Drawing::Size(83, 27);
			this->igual_lbl->TabIndex = 28;
			this->igual_lbl->Text = L"Igual a:";
			this->igual_lbl->Visible = false;
			// 
			// igual_txt
			// 
			this->igual_txt->Location = System::Drawing::Point(322, 375);
			this->igual_txt->Name = L"igual_txt";
			this->igual_txt->Size = System::Drawing::Size(209, 20);
			this->igual_txt->TabIndex = 29;
			this->igual_txt->Visible = false;
			this->igual_txt->TextChanged += gcnew System::EventHandler(this, &MyForm::igual_txt_TextChanged_1);
			// 
			// menor_txt
			// 
			this->menor_txt->Location = System::Drawing::Point(322, 274);
			this->menor_txt->Name = L"menor_txt";
			this->menor_txt->Size = System::Drawing::Size(209, 20);
			this->menor_txt->TabIndex = 30;
			this->menor_txt->Visible = false;
			this->menor_txt->TextChanged += gcnew System::EventHandler(this, &MyForm::menor_txt_TextChanged_1);
			// 
			// mayor_txt
			// 
			this->mayor_txt->Location = System::Drawing::Point(322, 175);
			this->mayor_txt->Name = L"mayor_txt";
			this->mayor_txt->Size = System::Drawing::Size(209, 20);
			this->mayor_txt->TabIndex = 31;
			this->mayor_txt->Visible = false;
			this->mayor_txt->TextChanged += gcnew System::EventHandler(this, &MyForm::mayor_txt_TextChanged_1);
			// 
			// contiene_txt
			// 
			this->contiene_txt->Location = System::Drawing::Point(322, 375);
			this->contiene_txt->Name = L"contiene_txt";
			this->contiene_txt->Size = System::Drawing::Size(209, 20);
			this->contiene_txt->TabIndex = 32;
			this->contiene_txt->Visible = false;
			this->contiene_txt->TextChanged += gcnew System::EventHandler(this, &MyForm::contiene_txt_TextChanged);
			// 
			// finaliza_txt
			// 
			this->finaliza_txt->Location = System::Drawing::Point(322, 274);
			this->finaliza_txt->Name = L"finaliza_txt";
			this->finaliza_txt->Size = System::Drawing::Size(209, 20);
			this->finaliza_txt->TabIndex = 33;
			this->finaliza_txt->Visible = false;
			this->finaliza_txt->TextChanged += gcnew System::EventHandler(this, &MyForm::finaliza_txt_TextChanged);
			// 
			// empieza_txt
			// 
			this->empieza_txt->Location = System::Drawing::Point(322, 175);
			this->empieza_txt->Name = L"empieza_txt";
			this->empieza_txt->Size = System::Drawing::Size(209, 20);
			this->empieza_txt->TabIndex = 34;
			this->empieza_txt->Visible = false;
			this->empieza_txt->TextChanged += gcnew System::EventHandler(this, &MyForm::empieza_txt_TextChanged);
			// 
			// filtrar_btn
			// 
			this->filtrar_btn->Location = System::Drawing::Point(911, 543);
			this->filtrar_btn->Name = L"filtrar_btn";
			this->filtrar_btn->Size = System::Drawing::Size(75, 23);
			this->filtrar_btn->TabIndex = 35;
			this->filtrar_btn->Text = L"Filtrar";
			this->filtrar_btn->UseVisualStyleBackColor = true;
			this->filtrar_btn->Visible = false;
			// 
			// usuario_lbl
			// 
			this->usuario_lbl->AutoSize = true;
			this->usuario_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usuario_lbl->Location = System::Drawing::Point(171, 199);
			this->usuario_lbl->Name = L"usuario_lbl";
			this->usuario_lbl->Size = System::Drawing::Size(72, 21);
			this->usuario_lbl->TabIndex = 36;
			this->usuario_lbl->Text = L"Usuario:";
			// 
			// iniciar_sesion_lbl
			// 
			this->iniciar_sesion_lbl->AutoSize = true;
			this->iniciar_sesion_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iniciar_sesion_lbl->Location = System::Drawing::Point(267, 128);
			this->iniciar_sesion_lbl->Name = L"iniciar_sesion_lbl";
			this->iniciar_sesion_lbl->Size = System::Drawing::Size(115, 21);
			this->iniciar_sesion_lbl->TabIndex = 37;
			this->iniciar_sesion_lbl->Text = L"Iniciar Sesión:";
			// 
			// contraseña_lbl
			// 
			this->contraseña_lbl->AutoSize = true;
			this->contraseña_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contraseña_lbl->Location = System::Drawing::Point(145, 261);
			this->contraseña_lbl->Name = L"contraseña_lbl";
			this->contraseña_lbl->Size = System::Drawing::Size(98, 21);
			this->contraseña_lbl->TabIndex = 38;
			this->contraseña_lbl->Text = L"Contraseña:";
			// 
			// contraseña_txt
			// 
			this->contraseña_txt->Location = System::Drawing::Point(300, 263);
			this->contraseña_txt->Name = L"contraseña_txt";
			this->contraseña_txt->Size = System::Drawing::Size(160, 20);
			this->contraseña_txt->TabIndex = 40;
			this->contraseña_txt->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// usuario_txt
			// 
			this->usuario_txt->Location = System::Drawing::Point(300, 199);
			this->usuario_txt->Name = L"usuario_txt";
			this->usuario_txt->Size = System::Drawing::Size(160, 20);
			this->usuario_txt->TabIndex = 41;
			// 
			// iniciar_sesion_btn
			// 
			this->iniciar_sesion_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->iniciar_sesion_btn->Location = System::Drawing::Point(282, 334);
			this->iniciar_sesion_btn->Name = L"iniciar_sesion_btn";
			this->iniciar_sesion_btn->Size = System::Drawing::Size(90, 35);
			this->iniciar_sesion_btn->TabIndex = 42;
			this->iniciar_sesion_btn->Text = L"Sign in";
			this->iniciar_sesion_btn->UseVisualStyleBackColor = true;
			this->iniciar_sesion_btn->Click += gcnew System::EventHandler(this, &MyForm::iniciar_sesion_btn_Click);
			// 
			// menu_lbl
			// 
			this->menu_lbl->AutoSize = true;
			this->menu_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menu_lbl->Location = System::Drawing::Point(277, 128);
			this->menu_lbl->Name = L"menu_lbl";
			this->menu_lbl->Size = System::Drawing::Size(81, 27);
			this->menu_lbl->TabIndex = 43;
			this->menu_lbl->Text = L"MENÚ";
			this->menu_lbl->Visible = false;
			// 
			// buscarhc_btn
			// 
			this->buscarhc_btn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buscarhc_btn->Location = System::Drawing::Point(175, 223);
			this->buscarhc_btn->Name = L"buscarhc_btn";
			this->buscarhc_btn->Size = System::Drawing::Size(298, 45);
			this->buscarhc_btn->TabIndex = 44;
			this->buscarhc_btn->Text = L"Buscar Historia Clínica";
			this->buscarhc_btn->UseVisualStyleBackColor = true;
			this->buscarhc_btn->Visible = false;
			this->buscarhc_btn->Click += gcnew System::EventHandler(this, &MyForm::buscarhc_btn_Click);
			// 
			// filtrarhc_btn
			// 
			this->filtrarhc_btn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->filtrarhc_btn->Location = System::Drawing::Point(175, 300);
			this->filtrarhc_btn->Name = L"filtrarhc_btn";
			this->filtrarhc_btn->Size = System::Drawing::Size(298, 46);
			this->filtrarhc_btn->TabIndex = 45;
			this->filtrarhc_btn->Text = L"Filtrar Historias Clínicas";
			this->filtrarhc_btn->UseVisualStyleBackColor = true;
			this->filtrarhc_btn->Visible = false;
			this->filtrarhc_btn->Click += gcnew System::EventHandler(this, &MyForm::filtrarhc_btn_Click);
			// 
			// Regresar_menu_btn
			// 
			this->Regresar_menu_btn->Location = System::Drawing::Point(479, 454);
			this->Regresar_menu_btn->Name = L"Regresar_menu_btn";
			this->Regresar_menu_btn->Size = System::Drawing::Size(75, 23);
			this->Regresar_menu_btn->TabIndex = 46;
			this->Regresar_menu_btn->Text = L"Regresar";
			this->Regresar_menu_btn->UseVisualStyleBackColor = true;
			this->Regresar_menu_btn->Visible = false;
			this->Regresar_menu_btn->Click += gcnew System::EventHandler(this, &MyForm::Regresar_menu_btn_Click);
			// 
			// buscar_buscarpor_lbl
			// 
			this->buscar_buscarpor_lbl->AutoSize = true;
			this->buscar_buscarpor_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buscar_buscarpor_lbl->Location = System::Drawing::Point(266, 128);
			this->buscar_buscarpor_lbl->Name = L"buscar_buscarpor_lbl";
			this->buscar_buscarpor_lbl->Size = System::Drawing::Size(123, 27);
			this->buscar_buscarpor_lbl->TabIndex = 47;
			this->buscar_buscarpor_lbl->Text = L"Buscar por:";
			this->buscar_buscarpor_lbl->Visible = false;
			// 
			// buscarhc_nombre_btn
			// 
			this->buscarhc_nombre_btn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buscarhc_nombre_btn->Location = System::Drawing::Point(161, 190);
			this->buscarhc_nombre_btn->Name = L"buscarhc_nombre_btn";
			this->buscarhc_nombre_btn->Size = System::Drawing::Size(350, 41);
			this->buscarhc_nombre_btn->TabIndex = 48;
			this->buscarhc_nombre_btn->Text = L"Nombre de la Historia Clinica";
			this->buscarhc_nombre_btn->UseVisualStyleBackColor = true;
			this->buscarhc_nombre_btn->Visible = false;
			this->buscarhc_nombre_btn->Click += gcnew System::EventHandler(this, &MyForm::buscarhc_nombre_btn_Click);
			// 
			// buscarhc_extension_btn
			// 
			this->buscarhc_extension_btn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->buscarhc_extension_btn->Location = System::Drawing::Point(161, 251);
			this->buscarhc_extension_btn->Name = L"buscarhc_extension_btn";
			this->buscarhc_extension_btn->Size = System::Drawing::Size(350, 41);
			this->buscarhc_extension_btn->TabIndex = 49;
			this->buscarhc_extension_btn->Text = L"Extensión de la Historia Clínica";
			this->buscarhc_extension_btn->UseVisualStyleBackColor = true;
			this->buscarhc_extension_btn->Visible = false;
			this->buscarhc_extension_btn->Click += gcnew System::EventHandler(this, &MyForm::buscarhc_extension_btn_Click);
			// 
			// buscarhc_tam_btn
			// 
			this->buscarhc_tam_btn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->buscarhc_tam_btn->Location = System::Drawing::Point(161, 312);
			this->buscarhc_tam_btn->Name = L"buscarhc_tam_btn";
			this->buscarhc_tam_btn->Size = System::Drawing::Size(350, 40);
			this->buscarhc_tam_btn->TabIndex = 50;
			this->buscarhc_tam_btn->Text = L"Tamaño de la Historia Clínica";
			this->buscarhc_tam_btn->UseVisualStyleBackColor = true;
			this->buscarhc_tam_btn->Visible = false;
			this->buscarhc_tam_btn->Click += gcnew System::EventHandler(this, &MyForm::buscarhc_tam_btn_Click);
			// 
			// buscarhc_fecha_btn
			// 
			this->buscarhc_fecha_btn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->buscarhc_fecha_btn->Location = System::Drawing::Point(161, 371);
			this->buscarhc_fecha_btn->Name = L"buscarhc_fecha_btn";
			this->buscarhc_fecha_btn->Size = System::Drawing::Size(350, 38);
			this->buscarhc_fecha_btn->TabIndex = 51;
			this->buscarhc_fecha_btn->Text = L"Fecha de Creación de la Historia Clínica";
			this->buscarhc_fecha_btn->UseVisualStyleBackColor = true;
			this->buscarhc_fecha_btn->Visible = false;
			this->buscarhc_fecha_btn->Click += gcnew System::EventHandler(this, &MyForm::buscarhc_fecha_btn_Click);
			// 
			// buscarhc_dni_btn
			// 
			this->buscarhc_dni_btn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->buscarhc_dni_btn->Location = System::Drawing::Point(161, 428);
			this->buscarhc_dni_btn->Name = L"buscarhc_dni_btn";
			this->buscarhc_dni_btn->Size = System::Drawing::Size(350, 39);
			this->buscarhc_dni_btn->TabIndex = 52;
			this->buscarhc_dni_btn->Text = L"DNI del paciente";
			this->buscarhc_dni_btn->UseVisualStyleBackColor = true;
			this->buscarhc_dni_btn->Visible = false;
			this->buscarhc_dni_btn->Click += gcnew System::EventHandler(this, &MyForm::buscarhc_dni_btn_Click);
			// 
			// regresar_buscarpor_btn
			// 
			this->regresar_buscarpor_btn->Location = System::Drawing::Point(544, 493);
			this->regresar_buscarpor_btn->Name = L"regresar_buscarpor_btn";
			this->regresar_buscarpor_btn->Size = System::Drawing::Size(75, 23);
			this->regresar_buscarpor_btn->TabIndex = 53;
			this->regresar_buscarpor_btn->Text = L"Regresar";
			this->regresar_buscarpor_btn->UseVisualStyleBackColor = true;
			this->regresar_buscarpor_btn->Visible = false;
			this->regresar_buscarpor_btn->Click += gcnew System::EventHandler(this, &MyForm::regresar_buscarpor_btn_Click);
			// 
			// regresar_dato_btn
			// 
			this->regresar_dato_btn->Location = System::Drawing::Point(544, 492);
			this->regresar_dato_btn->Name = L"regresar_dato_btn";
			this->regresar_dato_btn->Size = System::Drawing::Size(75, 23);
			this->regresar_dato_btn->TabIndex = 54;
			this->regresar_dato_btn->Text = L"Regresar";
			this->regresar_dato_btn->UseVisualStyleBackColor = true;
			this->regresar_dato_btn->Visible = false;
			this->regresar_dato_btn->Click += gcnew System::EventHandler(this, &MyForm::regresar_dato_btn_Click);
			// 
			// extension_btn
			// 
			this->extension_btn->Location = System::Drawing::Point(497, 169);
			this->extension_btn->Name = L"extension_btn";
			this->extension_btn->Size = System::Drawing::Size(75, 23);
			this->extension_btn->TabIndex = 55;
			this->extension_btn->Text = L"Buscar";
			this->extension_btn->UseVisualStyleBackColor = true;
			this->extension_btn->Visible = false;
			this->extension_btn->Click += gcnew System::EventHandler(this, &MyForm::extension_btn_Click);
			// 
			// tam_btn
			// 
			this->tam_btn->Location = System::Drawing::Point(497, 169);
			this->tam_btn->Name = L"tam_btn";
			this->tam_btn->Size = System::Drawing::Size(75, 23);
			this->tam_btn->TabIndex = 56;
			this->tam_btn->Text = L"Buscar";
			this->tam_btn->UseVisualStyleBackColor = true;
			this->tam_btn->Visible = false;
			this->tam_btn->Click += gcnew System::EventHandler(this, &MyForm::tam_btn_Click);
			// 
			// fecha_btn
			// 
			this->fecha_btn->Location = System::Drawing::Point(497, 169);
			this->fecha_btn->Name = L"fecha_btn";
			this->fecha_btn->Size = System::Drawing::Size(75, 23);
			this->fecha_btn->TabIndex = 57;
			this->fecha_btn->Text = L"Buscar";
			this->fecha_btn->UseVisualStyleBackColor = true;
			this->fecha_btn->Visible = false;
			this->fecha_btn->Click += gcnew System::EventHandler(this, &MyForm::fecha_btn_Click);
			// 
			// dni_btn
			// 
			this->dni_btn->Location = System::Drawing::Point(497, 167);
			this->dni_btn->Name = L"dni_btn";
			this->dni_btn->Size = System::Drawing::Size(75, 23);
			this->dni_btn->TabIndex = 58;
			this->dni_btn->Text = L"Buscar";
			this->dni_btn->UseVisualStyleBackColor = true;
			this->dni_btn->Visible = false;
			this->dni_btn->Click += gcnew System::EventHandler(this, &MyForm::dni_btn_Click);
			// 
			// buscar_dni_lbl
			// 
			this->buscar_dni_lbl->AutoSize = true;
			this->buscar_dni_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F));
			this->buscar_dni_lbl->Location = System::Drawing::Point(85, 169);
			this->buscar_dni_lbl->Name = L"buscar_dni_lbl";
			this->buscar_dni_lbl->Size = System::Drawing::Size(57, 23);
			this->buscar_dni_lbl->TabIndex = 59;
			this->buscar_dni_lbl->Text = L"DNI: ";
			this->buscar_dni_lbl->Visible = false;
			// 
			// buscar_dni_txt
			// 
			this->buscar_dni_txt->Location = System::Drawing::Point(143, 170);
			this->buscar_dni_txt->Name = L"buscar_dni_txt";
			this->buscar_dni_txt->Size = System::Drawing::Size(332, 20);
			this->buscar_dni_txt->TabIndex = 60;
			this->buscar_dni_txt->Visible = false;
			// 
			// regresar_filtrarnombre_btn
			// 
			this->regresar_filtrarnombre_btn->Location = System::Drawing::Point(544, 491);
			this->regresar_filtrarnombre_btn->Name = L"regresar_filtrarnombre_btn";
			this->regresar_filtrarnombre_btn->Size = System::Drawing::Size(75, 23);
			this->regresar_filtrarnombre_btn->TabIndex = 61;
			this->regresar_filtrarnombre_btn->Text = L"Regresar";
			this->regresar_filtrarnombre_btn->UseVisualStyleBackColor = true;
			this->regresar_filtrarnombre_btn->Visible = false;
			this->regresar_filtrarnombre_btn->Click += gcnew System::EventHandler(this, &MyForm::regresar_filtrarnombre_btn_Click);
			// 
			// regresar_filtrartam_btn
			// 
			this->regresar_filtrartam_btn->Location = System::Drawing::Point(544, 491);
			this->regresar_filtrartam_btn->Name = L"regresar_filtrartam_btn";
			this->regresar_filtrartam_btn->Size = System::Drawing::Size(75, 23);
			this->regresar_filtrartam_btn->TabIndex = 62;
			this->regresar_filtrartam_btn->Text = L"Regresar";
			this->regresar_filtrartam_btn->UseVisualStyleBackColor = true;
			this->regresar_filtrartam_btn->Visible = false;
			this->regresar_filtrartam_btn->Click += gcnew System::EventHandler(this, &MyForm::regresar_filtrartam_btn_Click);
			// 
			// filtrarnombre_btn
			// 
			this->filtrarnombre_btn->Location = System::Drawing::Point(89, 491);
			this->filtrarnombre_btn->Name = L"filtrarnombre_btn";
			this->filtrarnombre_btn->Size = System::Drawing::Size(75, 23);
			this->filtrarnombre_btn->TabIndex = 63;
			this->filtrarnombre_btn->Text = L"Filtrar";
			this->filtrarnombre_btn->UseVisualStyleBackColor = true;
			this->filtrarnombre_btn->Visible = false;
			this->filtrarnombre_btn->Click += gcnew System::EventHandler(this, &MyForm::filtrarnombre_btn_Click);
			// 
			// filtrartam_btn
			// 
			this->filtrartam_btn->Location = System::Drawing::Point(89, 491);
			this->filtrartam_btn->Name = L"filtrartam_btn";
			this->filtrartam_btn->Size = System::Drawing::Size(75, 23);
			this->filtrartam_btn->TabIndex = 64;
			this->filtrartam_btn->Text = L"Filtrar";
			this->filtrartam_btn->UseVisualStyleBackColor = true;
			this->filtrartam_btn->Visible = false;
			this->filtrartam_btn->Click += gcnew System::EventHandler(this, &MyForm::filtrartam_btn_Click);
			// 
			// regresar_filtrarname_btn
			// 
			this->regresar_filtrarname_btn->Location = System::Drawing::Point(544, 491);
			this->regresar_filtrarname_btn->Name = L"regresar_filtrarname_btn";
			this->regresar_filtrarname_btn->Size = System::Drawing::Size(75, 23);
			this->regresar_filtrarname_btn->TabIndex = 65;
			this->regresar_filtrarname_btn->Text = L"Regresar";
			this->regresar_filtrarname_btn->UseVisualStyleBackColor = true;
			this->regresar_filtrarname_btn->Visible = false;
			this->regresar_filtrarname_btn->Click += gcnew System::EventHandler(this, &MyForm::regresar_filtrarname_btn_Click);
			// 
			// regresar_filtrarsize_btn
			// 
			this->regresar_filtrarsize_btn->Location = System::Drawing::Point(544, 493);
			this->regresar_filtrarsize_btn->Name = L"regresar_filtrarsize_btn";
			this->regresar_filtrarsize_btn->Size = System::Drawing::Size(75, 23);
			this->regresar_filtrarsize_btn->TabIndex = 66;
			this->regresar_filtrarsize_btn->Text = L"Regresar";
			this->regresar_filtrarsize_btn->UseVisualStyleBackColor = true;
			this->regresar_filtrarsize_btn->Visible = false;
			this->regresar_filtrarsize_btn->Click += gcnew System::EventHandler(this, &MyForm::regresar_filtrarsize_btn_Click);
			// 
			// hcfiltrados_lbl
			// 
			this->hcfiltrados_lbl->AutoSize = true;
			this->hcfiltrados_lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->hcfiltrados_lbl->Location = System::Drawing::Point(84, 128);
			this->hcfiltrados_lbl->Name = L"hcfiltrados_lbl";
			this->hcfiltrados_lbl->Size = System::Drawing::Size(380, 27);
			this->hcfiltrados_lbl->TabIndex = 67;
			this->hcfiltrados_lbl->Text = L"Historias clínicas con filtros aplicados:";
			this->hcfiltrados_lbl->Visible = false;
			// 
			// ordenar_nombre_btn
			// 
			this->ordenar_nombre_btn->Location = System::Drawing::Point(497, 167);
			this->ordenar_nombre_btn->Name = L"ordenar_nombre_btn";
			this->ordenar_nombre_btn->Size = System::Drawing::Size(75, 23);
			this->ordenar_nombre_btn->TabIndex = 68;
			this->ordenar_nombre_btn->Text = L"Ordenar";
			this->ordenar_nombre_btn->UseVisualStyleBackColor = true;
			this->ordenar_nombre_btn->Visible = false;
			this->ordenar_nombre_btn->Click += gcnew System::EventHandler(this, &MyForm::ordenar_nombre_btn_Click);
			// 
			// ordenar_tam_btn
			// 
			this->ordenar_tam_btn->Location = System::Drawing::Point(497, 167);
			this->ordenar_tam_btn->Name = L"ordenar_tam_btn";
			this->ordenar_tam_btn->Size = System::Drawing::Size(75, 23);
			this->ordenar_tam_btn->TabIndex = 69;
			this->ordenar_tam_btn->Text = L"Ordenar";
			this->ordenar_tam_btn->UseVisualStyleBackColor = true;
			this->ordenar_tam_btn->Visible = false;
			this->ordenar_tam_btn->Click += gcnew System::EventHandler(this, &MyForm::ordenar_tam_btn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(658, 526);
			this->Controls->Add(this->hcfiltrados_lbl);
			this->Controls->Add(this->regresar_filtrarsize_btn);
			this->Controls->Add(this->regresar_filtrarname_btn);
			this->Controls->Add(this->filtrarnombre_btn);
			this->Controls->Add(this->regresar_filtrartam_btn);
			this->Controls->Add(this->regresar_filtrarnombre_btn);
			this->Controls->Add(this->mayor_txt);
			this->Controls->Add(this->igual_txt);
			this->Controls->Add(this->igual_lbl);
			this->Controls->Add(this->contiene_lbl);
			this->Controls->Add(this->finaliza_lbl);
			this->Controls->Add(this->filtrarhc_nombre_btn);
			this->Controls->Add(this->filtrar_filtrarpor_lbl);
			this->Controls->Add(this->buscar_dni_lbl);
			this->Controls->Add(this->filtrarhc_btn);
			this->Controls->Add(this->buscar_tamano_txt);
			this->Controls->Add(this->regresar_dato_btn);
			this->Controls->Add(this->colocar_lbl);
			this->Controls->Add(this->regresar_buscarpor_btn);
			this->Controls->Add(this->buscarhc_dni_btn);
			this->Controls->Add(this->buscarhc_tam_btn);
			this->Controls->Add(this->buscarhc_nombre_btn);
			this->Controls->Add(this->buscar_buscarpor_lbl);
			this->Controls->Add(this->buscarhc_btn);
			this->Controls->Add(this->menu_lbl);
			this->Controls->Add(this->iniciar_sesion_btn);
			this->Controls->Add(this->usuario_txt);
			this->Controls->Add(this->contraseña_txt);
			this->Controls->Add(this->contraseña_lbl);
			this->Controls->Add(this->iniciar_sesion_lbl);
			this->Controls->Add(this->usuario_lbl);
			this->Controls->Add(this->filtrar_btn);
			this->Controls->Add(this->buscar_btn);
			this->Controls->Add(this->buscar_extension_txt);
			this->Controls->Add(this->buscar_tamano_lbl);
			this->Controls->Add(this->hospital_lbl);
			this->Controls->Add(this->buscar_nombre_lbl);
			this->Controls->Add(this->buscar_nombre_txt);
			this->Controls->Add(this->buscar_extension_lbl);
			this->Controls->Add(this->buscar_dni_txt);
			this->Controls->Add(this->buscar_fecha_lbl);
			this->Controls->Add(this->empieza_lbl);
			this->Controls->Add(this->mayor_lbl);
			this->Controls->Add(this->buscar_fecha_txt);
			this->Controls->Add(this->filtrartam_btn);
			this->Controls->Add(this->empieza_txt);
			this->Controls->Add(this->finaliza_txt);
			this->Controls->Add(this->contiene_txt);
			this->Controls->Add(this->Regresar_menu_btn);
			this->Controls->Add(this->ordenar_nombre_btn);
			this->Controls->Add(this->fecha_btn);
			this->Controls->Add(this->tam_btn);
			this->Controls->Add(this->extension_btn);
			this->Controls->Add(this->nombre_btn);
			this->Controls->Add(this->dni_btn);
			this->Controls->Add(this->ordenar_tam_btn);
			this->Controls->Add(this->buscarhc_fecha_btn);
			this->Controls->Add(this->VerArchivos);
			this->Controls->Add(this->filtrarhc_tam_btn);
			this->Controls->Add(this->menor_lbl);
			this->Controls->Add(this->menor_txt);
			this->Controls->Add(this->buscarhc_extension_btn);
			this->Name = L"MyForm";
			this->Text = L".";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		string ConvertirString(String^ ss)
		{
			return msclr::interop::marshal_as<std::string>(ss);
		}
		int getCodigoASCII(string cadena) {
			int acumulador;
			for (int i = 0; i < cadena.length(); i++)
			{
				acumulador = acumulador + int(cadena[i]);
			}
			return acumulador;
		}

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	}
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
					
					string textoDNI;
					FileInfo^ archivo = gcnew FileInfo(file);
					StreamReader^ dni = archivo->OpenText();
					String^ s = dni->ReadLine();
					
					size++;
					ArregloArchivo[size - 1] = new HistoriasClinicas(ConvertirString(archivo->Name), archivo->Length, ConvertirString(archivo->Extension),
						ConvertirString(Convert::ToString(archivo->CreationTime)), ConvertirString(file), ConvertirString(s));
					String^ mostrarArchivo = gcnew String(ArregloArchivo[size - 1]->mostrarArchivoCompleto().c_str());
					VerArchivos->Items->Add(mostrarArchivo);
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
						string textoDNI;
						FileInfo^ archivo = gcnew FileInfo(file);
						StreamReader^ dni = archivo->OpenText();
						String^ s = dni->ReadLine();

						size++;
						ArregloArchivo[size - 1] = new HistoriasClinicas(ConvertirString(archivo->Name), archivo->Length, ConvertirString(archivo->Extension),
							ConvertirString(Convert::ToString(archivo->CreationTime)), ConvertirString(file), ConvertirString(s));
						String^ mostrarArchivo = gcnew String(ArregloArchivo[size - 1]->mostrarArchivoCompleto().c_str());
						VerArchivos->Items->Add(mostrarArchivo);
					

					}
				}
			}
			for (int i = 0; i < size; i++) {
				objArbol->insertar_tam(ArregloArchivo[i]);
			}
			//objArbol->enOrden_tam();

			buscar_btn->Visible = false;
			menu_lbl->Visible = true;
			buscarhc_btn->Visible = true;
			filtrarhc_btn->Visible = true;
			Regresar_menu_btn->Visible = false;
		}
	}
private: System::Void iniciar_sesion_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	buscar_btn->Visible = true;
	iniciar_sesion_lbl->Visible = false;
	iniciar_sesion_btn->Visible = false;
	usuario_lbl->Visible = false;
	contraseña_lbl->Visible = false;
	usuario_txt->Visible = false;
	contraseña_txt->Visible = false;
	iniciar_sesion_btn->Visible = false;

	string id = ConvertirString(usuario_txt->Text);
	string password = ConvertirString(contraseña_txt->Text);
	if (id == tablaAccesos->buscarParaIngresar(getCodigoASCII(password)))
	{
		buscar_btn->Visible = true;
		iniciar_sesion_lbl->Visible = false;
		iniciar_sesion_btn->Visible = false;
		usuario_lbl->Visible = false;
		contraseña_lbl->Visible = false;
		usuario_txt->Visible = false;
		contraseña_txt->Visible = false;
		iniciar_sesion_btn->Visible = false;
	}
	else
	{
		//MessageBox::Show("Ingrese un usuario valido");
	}
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//contraseña_txt->Text = "";
	contraseña_txt->PasswordChar = '*';
}
private: System::Void Regresar_menu_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	buscar_btn->Visible = true;
	menu_lbl->Visible = false;
	buscarhc_btn->Visible = false;
	filtrarhc_btn->Visible = false;
	Regresar_menu_btn->Visible = false;
}
private: System::Void buscarhc_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	menu_lbl->Visible = false;
	buscarhc_btn->Visible = false;
	filtrarhc_btn->Visible = false;
	Regresar_menu_btn->Visible = false;

	buscar_buscarpor_lbl->Visible = true;
	buscarhc_nombre_btn	->Visible = true;
	buscarhc_extension_btn->Visible = true;
	buscarhc_tam_btn->Visible = true;
	buscarhc_fecha_btn->Visible = true;
	buscarhc_dni_btn->Visible = true;
	regresar_buscarpor_btn->Visible = true;

	

}
private: System::Void regresar_buscarpor_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	menu_lbl->Visible = true;
	buscarhc_btn->Visible = true;
	filtrarhc_btn->Visible = true;
	Regresar_menu_btn->Visible = false;
	//buscar
	buscar_buscarpor_lbl->Visible = false;
	buscarhc_nombre_btn->Visible = false;
	buscarhc_extension_btn->Visible = false;
	buscarhc_tam_btn->Visible = false;
	buscarhc_fecha_btn->Visible = false;
	buscarhc_dni_btn->Visible = false;
	//Filtrar
	filtrar_filtrarpor_lbl->Visible = false;
	filtrarhc_nombre_btn->Visible = false;
	filtrarhc_tam_btn->Visible = false;

	regresar_buscarpor_btn->Visible = false;
}
private: System::Void buscarhc_nombre_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	colocar_lbl->Visible = true;
	buscar_nombre_lbl->Visible = true;
	buscar_nombre_txt->Visible = true;
	nombre_btn->Visible = true;
	VerArchivos->Visible = true;
	regresar_dato_btn->Visible = true;

	buscar_buscarpor_lbl->Visible = false;
	buscarhc_nombre_btn->Visible = false;
	buscarhc_extension_btn->Visible = false;
	buscarhc_tam_btn->Visible = false;
	buscarhc_fecha_btn->Visible = false;
	buscarhc_dni_btn->Visible = false;
	regresar_buscarpor_btn->Visible = false;

	

}
private: System::Void regresar_dato_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	//nombre
	colocar_lbl->Visible = false;
	buscar_nombre_lbl->Visible = false;
	buscar_nombre_txt->Visible = false;
	nombre_btn->Visible = false;
	VerArchivos->Visible = false;
	regresar_dato_btn->Visible = false;
	//extension
	buscar_extension_lbl->Visible = false;
	buscar_extension_txt->Visible = false;
	extension_btn->Visible = false;
	//tamaño
	buscar_tamano_lbl->Visible = false;
	buscar_tamano_txt->Visible = false;
	tam_btn->Visible = false;
	//fecha
	buscar_fecha_lbl->Visible = false;
	buscar_fecha_txt->Visible = false;
	fecha_btn->Visible = false;
	//dni
	buscar_dni_lbl->Visible = false;
	buscar_dni_txt->Visible = false;
	dni_btn->Visible = false;

	buscar_buscarpor_lbl->Visible = true;
	buscarhc_nombre_btn->Visible = true;
	buscarhc_extension_btn->Visible = true;
	buscarhc_tam_btn->Visible = true;
	buscarhc_fecha_btn->Visible = true;
	buscarhc_dni_btn->Visible = true;
	regresar_buscarpor_btn->Visible = true;

	
}
private: System::Void buscarhc_extension_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	colocar_lbl->Visible = true;
	buscar_extension_lbl->Visible = true;
	buscar_extension_txt->Visible = true;
	extension_btn->Visible = true;
	VerArchivos->Visible = true;
	regresar_dato_btn->Visible = true;

	buscar_buscarpor_lbl->Visible = false;
	buscarhc_nombre_btn->Visible = false;
	buscarhc_extension_btn->Visible = false;
	buscarhc_tam_btn->Visible = false;
	buscarhc_fecha_btn->Visible = false;
	buscarhc_dni_btn->Visible = false;
	regresar_buscarpor_btn->Visible = false;
}
private: System::Void buscarhc_tam_btn_Click(System::Object^  sender, System::EventArgs^  e) {

	colocar_lbl->Visible = true;
	buscar_tamano_lbl->Visible = true;
	buscar_tamano_txt->Visible = true;
	tam_btn->Visible = true;
	VerArchivos->Visible = true;
	regresar_dato_btn->Visible = true;

	buscar_buscarpor_lbl->Visible = false;
	buscarhc_nombre_btn->Visible = false;
	buscarhc_extension_btn->Visible = false;
	buscarhc_tam_btn->Visible = false;
	buscarhc_fecha_btn->Visible = false;
	buscarhc_dni_btn->Visible = false;
	regresar_buscarpor_btn->Visible = false;
}
private: System::Void buscarhc_fecha_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	colocar_lbl->Visible = true;
	buscar_fecha_lbl->Visible = true;
	buscar_fecha_txt->Visible = true;
	fecha_btn->Visible = true;
	VerArchivos->Visible = true;
	regresar_dato_btn->Visible = true;

	buscar_buscarpor_lbl->Visible = false;
	buscarhc_nombre_btn->Visible = false;
	buscarhc_extension_btn->Visible = false;
	buscarhc_tam_btn->Visible = false;
	buscarhc_fecha_btn->Visible = false;
	buscarhc_dni_btn->Visible = false;
	regresar_buscarpor_btn->Visible = false;

}
private: System::Void buscarhc_dni_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	colocar_lbl->Visible = true;
	buscar_dni_lbl->Visible = true;
	buscar_dni_txt->Visible = true;
	dni_btn->Visible = true;
	VerArchivos->Visible = true;
	regresar_dato_btn->Visible = true;

	buscar_buscarpor_lbl->Visible = false;
	buscarhc_nombre_btn->Visible = false;
	buscarhc_extension_btn->Visible = false;
	buscarhc_tam_btn->Visible = false;
	buscarhc_fecha_btn->Visible = false;
	buscarhc_dni_btn->Visible = false;
	regresar_buscarpor_btn->Visible = false;

}
private: System::Void filtrarhc_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	menu_lbl->Visible = false;
	buscarhc_btn->Visible = false;
	filtrarhc_btn->Visible = false;
	Regresar_menu_btn->Visible = false;



	filtrar_filtrarpor_lbl->Visible = true;
	filtrarhc_nombre_btn->Visible = true;
	filtrarhc_tam_btn->Visible = true;
	
	regresar_buscarpor_btn->Visible = true;
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void colocar_lbl_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void filtrarhc_nombre_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	filtrar_filtrarpor_lbl->Visible = false;
	filtrarhc_nombre_btn->Visible = false;
	filtrarhc_tam_btn->Visible = false;
	regresar_buscarpor_btn->Visible = false;

	empieza_lbl->Visible = true;
	empieza_txt->Visible = true;
	finaliza_lbl->Visible = true;
	finaliza_txt->Visible = true;
	contiene_lbl->Visible = true;
	contiene_txt->Visible = true;
	regresar_filtrarnombre_btn->Visible = true;

	filtrarnombre_btn->Visible = true;


}
private: System::Void regresar_filtrarnombre_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	filtrar_filtrarpor_lbl->Visible = true;
	filtrarhc_nombre_btn->Visible = true;
	filtrarhc_tam_btn->Visible = true;
	regresar_buscarpor_btn->Visible = true;

	empieza_lbl->Visible = false;
	empieza_txt->Visible = false;
	finaliza_lbl->Visible = false;
	finaliza_txt->Visible = false;
	contiene_lbl->Visible = false;
	contiene_txt->Visible = false;
	regresar_filtrarnombre_btn->Visible = false;
	filtrarnombre_btn->Visible = false;

}
private: System::Void filtrarhc_tam_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	filtrar_filtrarpor_lbl->Visible = false;
	filtrarhc_nombre_btn->Visible = false;
	filtrarhc_tam_btn->Visible = false;
	regresar_buscarpor_btn->Visible = false;

	mayor_lbl->Visible = true;
	mayor_txt->Visible = true;
	menor_lbl->Visible = true;
	menor_txt->Visible = true;
	igual_lbl->Visible = true;
	igual_txt->Visible = true;
	regresar_filtrartam_btn->Visible = true;

	filtrartam_btn->Visible = true;

}
private: System::Void regresar_filtrartam_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	filtrar_filtrarpor_lbl->Visible = true;
	filtrarhc_nombre_btn->Visible = true;
	filtrarhc_tam_btn->Visible = true;
	regresar_buscarpor_btn->Visible = true;

	mayor_lbl->Visible = false;
	mayor_txt->Visible = false;
	menor_lbl->Visible = false;
	menor_txt->Visible = false;
	igual_lbl->Visible = false;
	igual_txt->Visible = false;
	regresar_filtrartam_btn->Visible = false;
	filtrartam_btn->Visible = false;

}
private: System::Void filtrarnombre_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	
	VerArchivos->Visible = true;
	regresar_filtrarname_btn->Visible = true;
	hcfiltrados_lbl->Visible = true;

	empieza_lbl->Visible = false;
	empieza_txt->Visible = false;
	finaliza_lbl->Visible = false;
	finaliza_txt->Visible = false;
	contiene_lbl->Visible = false;
	contiene_txt->Visible = false;
	regresar_filtrarnombre_btn->Visible = false;
	
	filtrarnombre_btn->Visible = false;
	
	//ordenar_nombre_btn->Visible = true;

	VerArchivos->Items->Clear();

	//empieza
	if (empieza_txt->Text != "") {
		for (int i = 0; i < size; i++) {
			string n = ArregloArchivo[i]->getNombre();
			string n1 = n.substr(0, 1);
			if (n1 == ConvertirString(empieza_txt->Text)) {
				VerArchivos->Items->Add(gcnew String(ArregloArchivo[i]->getDireccion().c_str()));
			}
		}
	}

	//finaliza
	if (finaliza_txt->Text != "") {
		for (int i = 0; i < size; i++) {
			string n = ArregloArchivo[i]->getNombre();
			int n1 = n.length() - 5; 
			string n2 = n.substr(n1, 1);
			if (n2 == ConvertirString(finaliza_txt->Text)) {
				VerArchivos->Items->Add(gcnew String(ArregloArchivo[i]->getDireccion().c_str()));
			}
		}
	}

	//contiene
	if (contiene_txt->Text != "") 
	{
		for (int i = 0; i < size; i++) 
		{
			string tmp;
			string tmp2;
			string n = ArregloArchivo[i]->getNombre();
			for (int j = 0; j <n.length()-4; j++) 
			{
				int n1 = n.length() - j - 5;
				string n2 = n.substr(n1, 1);
				cout << n2 << i<<endl;//ana

				if (n2 == ConvertirString(contiene_txt->Text)) 
				{

					VerArchivos->Items->Add(gcnew String(ArregloArchivo[i]->getDireccion().c_str()));
					break;
				}
				
			}
		}
	}
}
private: System::Void filtrartam_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	VerArchivos->Visible = true;
	regresar_filtrarsize_btn->Visible = true;
	hcfiltrados_lbl->Visible = true;

	mayor_lbl->Visible = false;
	mayor_txt->Visible = false;
	menor_lbl->Visible = false;
	menor_txt->Visible = false;
	igual_lbl->Visible = false;
	igual_txt->Visible = false;
	regresar_filtrartam_btn->Visible = false;
	filtrartam_btn->Visible = false;
	VerArchivos->Items->Clear();

	ordenar_tam_btn->Visible = true;

	VerArchivos->Items->Clear();
	if (mayor_txt->Text != "") {
		objArbol->buscar_mayor(Convert::ToInt32(mayor_txt->Text));
		for (int i = 0; i < objArbol->_getvectorstring()->size(); i++)
		{
			VerArchivos->Items->Add(gcnew String(objArbol->_getvectorstring()->at(i).c_str()));
		}
		objArbol->_limpiarvector();
	}

	
	if (menor_txt->Text != "") {
		objArbol->buscar_menor(Convert::ToInt32(menor_txt->Text));
		for (int i = 0; i < objArbol->_getvectorstring()->size(); i++)
		{
			VerArchivos->Items->Add(gcnew String(objArbol->_getvectorstring()->at(i).c_str()));
		}
		objArbol->_limpiarvector();
	}

	if (igual_txt->Text != "") {
		objArbol->buscar_por_tam(Convert::ToInt32(igual_txt->Text));
		for (int i = 0; i < objArbol->_getvectorstring()->size(); i++)
		{
			VerArchivos->Items->Add(gcnew String(objArbol->_getvectorstring()->at(i).c_str()));
		}
		objArbol->_limpiarvector();
	}
}
private: System::Void regresar_filtrarname_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	VerArchivos->Visible = false;
	regresar_filtrarname_btn->Visible = false;
	hcfiltrados_lbl->Visible = false;

	empieza_lbl->Visible = true;
	empieza_txt->Visible = true;
	finaliza_lbl->Visible = true;
	finaliza_txt->Visible = true;
	contiene_lbl->Visible = true;
	contiene_txt->Visible = true;
	regresar_filtrarnombre_btn->Visible = true;

	filtrarnombre_btn->Visible = true;
	ordenar_nombre_btn->Visible = false;

}
private: System::Void regresar_filtrarsize_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	VerArchivos->Visible = false;
	regresar_filtrarsize_btn->Visible = false;
	hcfiltrados_lbl->Visible = false;

	mayor_lbl->Visible = true;
	mayor_txt->Visible = true;
	menor_lbl->Visible = true;
	menor_txt->Visible = true;
	igual_lbl->Visible = true;
	igual_txt->Visible = true;
	regresar_filtrartam_btn->Visible = true;

	filtrartam_btn->Visible = true;
	ordenar_tam_btn->Visible = false;


}
private: System::Void tam_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	int t = System::Convert::ToInt32(buscar_tamano_txt->Text);
	VerArchivos->Items->Clear();
	
	objArbol->buscar_por_tam(t);
	for (int i = 0; i < objArbol->_getvectorstring()->size(); i++)
	{
		VerArchivos->Items->Add(gcnew String(objArbol->_getvectorstring()->at(i).c_str()));
	}
	objArbol->_limpiarvector();
	
}

private: System::Void nombre_btn_Click(System::Object^  sender, System::EventArgs^  e) {

	VerArchivos->Items->Clear();
	
	objArbol->buscar_por_nombre(ConvertirString(buscar_nombre_txt->Text) + ".txt");
	for (int i = 0; i < objArbol->_getvectorstring()->size(); i++)
	{
		VerArchivos->Items->Add(gcnew String(objArbol->_getvectorstring()->at(i).c_str()));
	}
	objArbol->_limpiarvector();
}
private: System::Void fecha_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	
	VerArchivos->Items->Clear();

	objArbol->buscar_por_fecha(ConvertirString(buscar_fecha_txt->Text));
	for (int i = 0; i < objArbol->_getvectorstring()->size(); i++)
	{
		VerArchivos->Items->Add(gcnew String(objArbol->_getvectorstring()->at(i).c_str()));
	}
	objArbol->_limpiarvector();
}
private: System::Void extension_btn_Click(System::Object^  sender, System::EventArgs^  e) {

	VerArchivos->Items->Clear();

	objArbol->buscar_por_extension(ConvertirString(buscar_extension_txt->Text));
	for (int i = 0; i < objArbol->_getvectorstring()->size(); i++)
	{
		VerArchivos->Items->Add(gcnew String(objArbol->_getvectorstring()->at(i).c_str()));
	}
	objArbol->_limpiarvector();
}
private: System::Void dni_btn_Click(System::Object^  sender, System::EventArgs^  e) {

	VerArchivos->Items->Clear();

	objArbol->buscar_por_dni(ConvertirString(buscar_dni_txt->Text));
	for (int i = 0; i < objArbol->_getvectorstring()->size(); i++)
	{
		VerArchivos->Items->Add(gcnew String(objArbol->_getvectorstring()->at(i).c_str()));
	}
	objArbol->_limpiarvector();

}
private: System::Void empieza_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (empieza_txt->Text != "") {
		contiene_txt->Enabled = false;
		finaliza_txt->Enabled = false;
	}
	else {
		contiene_txt->Enabled = true;
		finaliza_txt->Enabled = true;
	}
}
private: System::Void finaliza_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (finaliza_txt->Text != "") {
		contiene_txt->Enabled = false;
		empieza_txt->Enabled = false;
	}
	else {
		contiene_txt->Enabled = true;
		empieza_txt->Enabled = true;
	}
}
private: System::Void contiene_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (contiene_txt->Text != "") {
		finaliza_txt->Enabled = false;
		empieza_txt->Enabled = false;
	}
	else {
		finaliza_txt->Enabled = true;
		empieza_txt->Enabled = true;
	}
}
private: System::Void mayor_txt_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
	if (mayor_txt->Text != "") {
		menor_txt->Enabled = false;
		igual_txt->Enabled = false;
	}
	else {
		menor_txt->Enabled = true;
		igual_txt->Enabled = true;
	}
}
private: System::Void menor_txt_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
	if (menor_txt->Text != "") {
		mayor_txt->Enabled = false;
		igual_txt->Enabled = false;
	}
	else {
		mayor_txt->Enabled = true;
		igual_txt->Enabled = true;
	}
}
private: System::Void igual_txt_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
	if (igual_txt->Text != "") {
		mayor_txt->Enabled = false;
		menor_txt->Enabled = false;
	}
	else {
		mayor_txt->Enabled = true;
		menor_txt->Enabled = true;
	}
}
private: System::Void ordenar_nombre_btn_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void ordenar_tam_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	int contador;
	contador++;
	VerArchivos->Items->Clear();
	if (contador % 2 != 0) {
		if (mayor_txt->Text != "") {
			objArbol->descendente_tam_mayor(Convert::ToInt32(mayor_txt->Text));
			for (int i = 0; i < objArbol->_getvectorstring()->size(); i++)
			{
				VerArchivos->Items->Add(gcnew String(objArbol->_getvectorstring()->at(i).c_str()));
			}
			objArbol->_limpiarvector();
		}
		if (menor_txt->Text != "") {
			objArbol->descendente_tam_menor(Convert::ToInt32(menor_txt->Text));
			for (int i = 0; i < objArbol->_getvectorstring()->size(); i++)
			{
				VerArchivos->Items->Add(gcnew String(objArbol->_getvectorstring()->at(i).c_str()));
			}
			objArbol->_limpiarvector();
		}
		if (igual_txt->Text != "") {
			objArbol->buscar_por_tam(Convert::ToInt32(igual_txt->Text));
			for (int i = 0; i < objArbol->_getvectorstring()->size(); i++)
			{
				VerArchivos->Items->Add(gcnew String(objArbol->_getvectorstring()->at(i).c_str()));
			}
			objArbol->_limpiarvector();
		}
	}

	else {
		if (mayor_txt->Text != "") {
			objArbol->ascendente_tam_mayor(Convert::ToInt32(mayor_txt->Text));
			for (int i = 0; i < objArbol->_getvectorstring()->size(); i++)
			{
				VerArchivos->Items->Add(gcnew String(objArbol->_getvectorstring()->at(i).c_str()));
			}
			objArbol->_limpiarvector();
		}


		if (menor_txt->Text != "") {
			objArbol->ascendente_tam_menor(Convert::ToInt32(menor_txt->Text));
			for (int i = 0; i < objArbol->_getvectorstring()->size(); i++)
			{
				VerArchivos->Items->Add(gcnew String(objArbol->_getvectorstring()->at(i).c_str()));
			}
			objArbol->_limpiarvector();
		}

		if (igual_txt->Text != "") {
			objArbol->buscar_por_tam(Convert::ToInt32(igual_txt->Text));
			for (int i = 0; i < objArbol->_getvectorstring()->size(); i++)
			{
				VerArchivos->Items->Add(gcnew String(objArbol->_getvectorstring()->at(i).c_str()));
			}
			objArbol->_limpiarvector();
		}
	}

	//contador = 0;

}
private: System::Void VerArchivos_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
{
	tablaAccesos->InsertarHash(getCodigoASCII("admin"), "admin");
	tablaAccesos->InsertarHash(getCodigoASCII("lucero"), "lucero");
	tablaAccesos->InsertarHash(getCodigoASCII("miguel"), "miguel");
	tablaAccesos->InsertarHash(getCodigoASCII("usuario"), "usuario");
}
};
}

