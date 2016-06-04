#pragma once
#include <windows.h>
#include <cstring>
#include <io.h>
/*
                                                                                                                                                    ,----,.          ,----,                 ,----,                                                                    ,----,. 
                            ,-.----.                                                                                        .--,-``-.     ___      ,'   ,' |       .'   .`|               .'   .`|                                                                  ,'   ,' | 
   ,---,.                    \    /  \                                    ,---,                                     ,----,  /   /     '.  /  .\   ,'   .'   |    .'   .'   ;            .'   .'   ;   ,---,     ,---,            ,----,     ,----..        ,---,   ,'   .'   | 
 ,'  .'  \                   |   :    \                                 ,--.' |      ,--,                         .'   .' \/ ../        ; \  ; |,----.'    .'  ,---, '    .'          ,---, '    .',`--.' |  ,`--.' |          .'   .' \   /   /   \    ,`--.' | ,----.'    .' 
,---.' .' |                  |   |  .\ :   ,---.        ,---,           |  |  :    ,--.'|                       ,----,'    \ ``\  .`-    ' `--" |    |   .'    |   :     ./           |   :     .//    /  : /    /  :        ,----,'    | /   .     :  /    /  : |    |   .'   
|   |  |: |                  .   :  |: |  '   ,'\   ,-+-. /  |          :  :  :    |  |,                        |    :  .  ;\___\/   \   :      :    :  |--,   ;   | .'  /            ;   | .'  /:    |.' ':    |.' '        |    :  .  ;.   /   ;.  \:    |.' ' :    :  |--,  
:   :  :  /     .--,         |   |   \ : /   /   | ,--.'|'   |   ,---.  :  |  |,--.`--'_       ,---.            ;    |.'  /      \   :   |      :    |  ;.' \  `---' /  ;             `---' /  ; `----':  |`----':  |        ;    |.'  /.   ;   /  ` ;`----':  | :    |  ;.' \ 
:   |    ;    /_ ./|         |   : .   /.   ; ,. :|   |  ,"' |  /     \ |  :  '   |,' ,'|     /     \           `----'/  ;       /  /   /       |    |      |    /  ;  /                /  ;  /     '   ' ;   '   ' ;        `----'/  ; ;   |  ; \ ; |   '   ' ; |    |      | 
|   :     \, ' , ' :         ;   | |`-' '   | |: :|   | /  | | /    / ' |  |   /' :'  | |    /    / '             /  ;  /        \  \   \       `----'.'\   ;   ;  /  /                ;  /  /      |   | |   |   | |          /  ;  /  |   :  | ; | '   |   | | `----'.'\   ; 
|   |   . /___/ \: |         |   | ;    '   | .; :|   | |  | |.    ' /  '  :  | | ||  | :   .    ' /             ;  /  /-,   ___ /   :   |        __  \  .  |  /  /  /                /  /  /       '   : ;   '   : ;         ;  /  /-, .   |  ' ' ' :   '   : ;   __  \  .  | 
'   :  '; |.  \  ' |         :   ' |    |   :    ||   | |  |/ '   ; :__ |  |  ' | :'  : |__ '   ; :__           /  /  /.`|  /   /\   /   : ___  /   /\/  /  :./__;  /               ./__;  /        |   | '   |   | '        /  /  /.`| '   ;  \; /  |   |   | ' /   /\/  /  : 
|   |  | ;  \  ;   :         :   : :     \   \  / |   | |--'  '   | '.'||  :  :_:,'|  | '.'|'   | '.'|        ./__;      : / ,,/  ',-    ./  .\/ ,,/  ',-   .|   : /                |   : /__       '   : |   '   : | ___  ./__;      :  \   \  ',  /    '   : |/ ,,/  ',-   . 
|   :   /    \  \  ;         |   | :      `----'  |   |/      |   :    :|  | ,'    ;  :    ;|   :    :        |   :    .'  \ ''\        ; \  ; \ ''\       ; ;   |/                 ;   |/  .\      ;   |.'   ;   |.'/  .\ |   :    .'    ;   :    /     ;   |.'\ ''\       ;  
|   | ,'      :  \  \        `---'.|              '---'        \   \  / `--''      |  ,   /  \   \  /         ;   | .'      \   \     .'   `--" \   \    .'  `---'                  `---'\  ; |     '---'     '---'  \  ; |;   | .'        \   \ .'      '---'   \   \    .'   
`----'         \  ' ;          `---`                            `----'              ---`-'    `----'          `---'          `--`-,,-'           `--`-,-'                                 `--"                        `--" `---'            `---`                 `--`-,-'     
                `--`                                                                                                                                                                                                                                                           




*/
bool FileExists(const char *fname)
{
	return access(fname, 0) != -1;
}
namespace SnippingTool {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	protected: 

	protected: 

	protected: 

	protected: 

	protected: 

	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->button1->Location = System::Drawing::Point(11, 232);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(82, 27);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ScreenShot";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(102, 237);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(75, 17);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"Start Paint";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(277, 266);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button1);
			this->KeyPreview = true;
			this->Name = L"Form1";
			this->Opacity = 0.99;
			this->TransparencyKey = System::Drawing::Color::Transparent;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Form1_Paint);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyUp);
			this->Resize += gcnew System::EventHandler(this, &Form1::Form1_Resize);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {		 
			 }
	private: System::Void Form1_Paint(System::Object^  sender, 
				 System::Windows::Forms::PaintEventArgs^  e) 
			 {
				 // Событие перерисовки экранной формы:
				 //this->ClientSize = System::Drawing::Size(240, 200);
				 // Устанавливаем вершины треугольника:
				 System::Drawing::Rectangle workingRectangle = Screen::PrimaryScreen->WorkingArea;
				 
				 this->Text = "Snipping Tool v0.1 Alpha";
				 
				 Point p1 = Point(workingRectangle.Height + workingRectangle.Width, 0);
				 Point p2 = Point(0, 0);
				 Point p3 = Point(0, workingRectangle.Height + workingRectangle.Width);
				 Point p4 = Point(workingRectangle.Height + workingRectangle.Width, workingRectangle.Height + workingRectangle.Width);
				 // Инициализируем массив точек:
				 array<Point> ^ Точки = { p1, p2, p3, p4 };
				 

				 // Рисуем закрашенный цветом ControlDark многоугольник:
				 e->Graphics->FillPolygon(gcnew SolidBrush(
					 SystemColors::ControlDark), Точки);
				 // Задаем цвет, который будет выглядеть прозрачным:
				 this->TransparencyKey = SystemColors::ControlDark;
				 

			 }
	
	private: System::Void Form1_Resize(System::Object^  sender, System::EventArgs^  e) {
				Refresh();
			 }

				 void mspaint() {

					 if ( checkBox1->Checked ) {
						 System::Threading::Thread::Sleep(10000);

						 if (FileExists("C:\\WINDOWS\\system32\\mspaint.exe"))
						 {
							 Diagnostics::Process::Start("C:\\WINDOWS\\system32\\mspaint.exe", ""); 
							 this->Close();
							 
						 } else
						 if (FileExists("C:\WINDOWS\system32\mspaint.exe"))
						 {
							 Diagnostics::Process::Start("C:\WINDOWS\system32\mspaint.exe", ""); 
							 this->Close();
						 } 
					 }

				 }

	private: System::Void Form1_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
if (e->KeyCode == Keys::PrintScreen) {
	this->Opacity = 0.01;
	
     SendKeys::Send( "%{PRTSC}" );

     mspaint();
	//СОБСТВЕННО ЗДЕСЬ (иЛИ НЕ ЗДЕСЬ) ДОЛЖЕН БЫТЬ КОД СОЗДАНИЯ Bitmap'a прямоугольника
			
				 }
		 
}
	
	
private: System::Void Form1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if (e->Control && e->Alt) {
				 this->Opacity = 0.01;
				 
				 SendKeys::Send( "%{PRTSC}" );
				  mspaint();
				 
			 }
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Opacity = 0.01;
			 SendKeys::Send( "%{PRTSC}" );
			mspaint();
			 
			 
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

