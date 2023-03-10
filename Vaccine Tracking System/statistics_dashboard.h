#pragma once
#include"statistics.h"
//#include<iostream>
using namespace std;
namespace gui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for statistics_dashboard
	/// </summary>
	public ref class statistics_dashboard : public System::Windows::Forms::Form
	{
	public:
		statistics_dashboard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~statistics_dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ GenderChart;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ CountryChart;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ DoseChart;
	private: System::Windows::Forms::Label^ GenderLabel;
	private: System::Windows::Forms::Label^ CountryLabel;
	private: System::Windows::Forms::Label^ DoseLabel;
	private: System::Windows::Forms::Label^ AgeLabel;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ AgeChart;


	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint1 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				3));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint2 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				5));
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint3 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				3));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint4 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				5));
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint5 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				3));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint6 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				5));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint7 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::Title^ title3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint8 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				3));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint9 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				5));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint10 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::Title^ title4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->GenderChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->CountryChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->GenderLabel = (gcnew System::Windows::Forms::Label());
			this->CountryLabel = (gcnew System::Windows::Forms::Label());
			this->DoseLabel = (gcnew System::Windows::Forms::Label());
			this->DoseChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->AgeLabel = (gcnew System::Windows::Forms::Label());
			this->AgeChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GenderChart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CountryChart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DoseChart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AgeChart))->BeginInit();
			this->SuspendLayout();
			// 
			// GenderChart
			// 
			this->GenderChart->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			chartArea1->Area3DStyle->Enable3D = true;
			chartArea1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			chartArea1->Name = L"ChartArea1";
			chartArea1->ShadowColor = System::Drawing::Color::Black;
			this->GenderChart->ChartAreas->Add(chartArea1);
			legend1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			legend1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			legend1->ForeColor = System::Drawing::Color::White;
			legend1->IsTextAutoFit = false;
			legend1->Name = L"Legend1";
			this->GenderChart->Legends->Add(legend1);
			this->GenderChart->Location = System::Drawing::Point(19, 12);
			this->GenderChart->Name = L"GenderChart";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			series1->Label = L"o";
			series1->LabelForeColor = System::Drawing::Color::White;
			series1->Legend = L"Legend1";
			series1->Name = L"s1";
			dataPoint1->Color = System::Drawing::Color::DodgerBlue;
			dataPoint1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8, System::Drawing::FontStyle::Bold));
			dataPoint1->Label = L"Males";
			dataPoint1->LabelForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			dataPoint2->Color = System::Drawing::Color::HotPink;
			dataPoint2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8, System::Drawing::FontStyle::Bold));
			dataPoint2->Label = L"Females";
			dataPoint2->LabelAngle = 0;
			dataPoint2->LabelBorderColor = System::Drawing::Color::Transparent;
			dataPoint2->LabelForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			series1->Points->Add(dataPoint1);
			series1->Points->Add(dataPoint2);
			series1->ShadowColor = System::Drawing::Color::Black;
			this->GenderChart->Series->Add(series1);
			this->GenderChart->Size = System::Drawing::Size(855, 350);
			this->GenderChart->TabIndex = 0;
			title1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			title1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18));
			title1->ForeColor = System::Drawing::Color::White;
			title1->Name = L"Title1";
			title1->Text = L"Gender Chart";
			title1->ToolTip = L"Gender Chart";
			this->GenderChart->Titles->Add(title1);
			// 
			// CountryChart
			// 
			this->CountryChart->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			chartArea2->Area3DStyle->Enable3D = true;
			chartArea2->Area3DStyle->LightStyle = System::Windows::Forms::DataVisualization::Charting::LightStyle::Realistic;
			chartArea2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			chartArea2->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			chartArea2->Name = L"ChartArea1";
			this->CountryChart->ChartAreas->Add(chartArea2);
			legend2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			legend2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			legend2->ForeColor = System::Drawing::Color::White;
			legend2->IsTextAutoFit = false;
			legend2->Name = L"Legend1";
			this->CountryChart->Legends->Add(legend2);
			this->CountryChart->Location = System::Drawing::Point(958, 12);
			this->CountryChart->Name = L"CountryChart";
			this->CountryChart->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series2->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			series2->Label = L"o";
			series2->Legend = L"Legend1";
			series2->Name = L"s1";
			dataPoint3->BackImage = L"";
			dataPoint3->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::Center;
			dataPoint3->BackImageWrapMode = System::Windows::Forms::DataVisualization::Charting::ChartImageWrapMode::Scaled;
			dataPoint3->BackSecondaryColor = System::Drawing::Color::Empty;
			dataPoint3->BorderDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dash;
			dataPoint3->BorderWidth = 0;
			dataPoint3->Color = System::Drawing::Color::Red;
			dataPoint3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8, System::Drawing::FontStyle::Bold));
			dataPoint3->Label = L"In Egypt";
			dataPoint3->LabelForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			dataPoint4->Color = System::Drawing::Color::RoyalBlue;
			dataPoint4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8, System::Drawing::FontStyle::Bold));
			dataPoint4->Label = L"Abroad";
			dataPoint4->LabelForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			series2->Points->Add(dataPoint3);
			series2->Points->Add(dataPoint4);
			series2->ShadowColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->CountryChart->Series->Add(series2);
			this->CountryChart->Size = System::Drawing::Size(855, 350);
			this->CountryChart->TabIndex = 1;
			title2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18));
			title2->ForeColor = System::Drawing::Color::White;
			title2->Name = L"Title2";
			title2->Text = L"Country Chart";
			title2->ToolTip = L"Country Chart";
			this->CountryChart->Titles->Add(title2);
			// 
			// GenderLabel
			// 
			this->GenderLabel->AutoEllipsis = true;
			this->GenderLabel->AutoSize = true;
			this->GenderLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->GenderLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GenderLabel->ForeColor = System::Drawing::Color::White;
			this->GenderLabel->Location = System::Drawing::Point(12, 397);
			this->GenderLabel->Name = L"GenderLabel";
			this->GenderLabel->Size = System::Drawing::Size(200, 42);
			this->GenderLabel->TabIndex = 2;
			this->GenderLabel->Text = L"Gender Label";
			// 
			// CountryLabel
			// 
			this->CountryLabel->AutoSize = true;
			this->CountryLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CountryLabel->ForeColor = System::Drawing::Color::White;
			this->CountryLabel->Location = System::Drawing::Point(951, 397);
			this->CountryLabel->Name = L"CountryLabel";
			this->CountryLabel->Size = System::Drawing::Size(211, 42);
			this->CountryLabel->TabIndex = 3;
			this->CountryLabel->Text = L"Country Label";
			// 
			// DoseLabel
			// 
			this->DoseLabel->AutoSize = true;
			this->DoseLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DoseLabel->ForeColor = System::Drawing::Color::White;
			this->DoseLabel->Location = System::Drawing::Point(951, 845);
			this->DoseLabel->Name = L"DoseLabel";
			this->DoseLabel->Size = System::Drawing::Size(196, 42);
			this->DoseLabel->TabIndex = 5;
			this->DoseLabel->Text = L"Status Label";
			// 
			// DoseChart
			// 
			this->DoseChart->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			chartArea3->Area3DStyle->Enable3D = true;
			chartArea3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			chartArea3->Name = L"ChartArea1";
			this->DoseChart->ChartAreas->Add(chartArea3);
			legend3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			legend3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			legend3->ForeColor = System::Drawing::Color::White;
			legend3->IsTextAutoFit = false;
			legend3->Name = L"Legend1";
			legend3->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19, System::Drawing::FontStyle::Bold));
			legend3->TitleForeColor = System::Drawing::Color::White;
			this->DoseChart->Legends->Add(legend3);
			this->DoseChart->Location = System::Drawing::Point(958, 492);
			this->DoseChart->Name = L"DoseChart";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8, System::Drawing::FontStyle::Bold));
			series3->Label = L"o";
			series3->LabelForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			series3->Legend = L"Legend1";
			series3->Name = L"s1";
			dataPoint5->Color = System::Drawing::Color::Red;
			dataPoint5->Label = L"Not vaccinated";
			dataPoint5->LabelForeColor = System::Drawing::Color::White;
			dataPoint6->Color = System::Drawing::Color::DarkViolet;
			dataPoint6->Label = L"1st dose";
			dataPoint6->LabelForeColor = System::Drawing::Color::White;
			dataPoint7->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataPoint7->Label = L"Both doses";
			dataPoint7->LabelForeColor = System::Drawing::Color::White;
			series3->Points->Add(dataPoint5);
			series3->Points->Add(dataPoint6);
			series3->Points->Add(dataPoint7);
			this->DoseChart->Series->Add(series3);
			this->DoseChart->Size = System::Drawing::Size(855, 350);
			this->DoseChart->TabIndex = 4;
			title3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18));
			title3->ForeColor = System::Drawing::Color::White;
			title3->Name = L"Title2";
			title3->Text = L"Status Chart";
			title3->ToolTip = L"Status Chart";
			this->DoseChart->Titles->Add(title3);
			// 
			// AgeLabel
			// 
			this->AgeLabel->AutoSize = true;
			this->AgeLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AgeLabel->ForeColor = System::Drawing::Color::White;
			this->AgeLabel->Location = System::Drawing::Point(29, 845);
			this->AgeLabel->Name = L"AgeLabel";
			this->AgeLabel->Size = System::Drawing::Size(155, 42);
			this->AgeLabel->TabIndex = 7;
			this->AgeLabel->Text = L"Age Label";
			// 
			// AgeChart
			// 
			this->AgeChart->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			chartArea4->Area3DStyle->Enable3D = true;
			chartArea4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			chartArea4->Name = L"ChartArea1";
			this->AgeChart->ChartAreas->Add(chartArea4);
			legend4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			legend4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			legend4->ForeColor = System::Drawing::Color::White;
			legend4->IsTextAutoFit = false;
			legend4->Name = L"Legend1";
			legend4->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19, System::Drawing::FontStyle::Bold));
			legend4->TitleForeColor = System::Drawing::Color::White;
			this->AgeChart->Legends->Add(legend4);
			this->AgeChart->Location = System::Drawing::Point(19, 492);
			this->AgeChart->Name = L"AgeChart";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8, System::Drawing::FontStyle::Bold));
			series4->Label = L"o";
			series4->LabelForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			series4->Legend = L"Legend1";
			series4->Name = L"s1";
			dataPoint8->Color = System::Drawing::Color::ForestGreen;
			dataPoint8->Label = L"Under 18";
			dataPoint8->LabelForeColor = System::Drawing::Color::White;
			dataPoint9->Color = System::Drawing::Color::DarkViolet;
			dataPoint9->Label = L"18-60";
			dataPoint9->LabelForeColor = System::Drawing::Color::White;
			dataPoint10->Color = System::Drawing::Color::DarkBlue;
			dataPoint10->Label = L"Above 60";
			dataPoint10->LabelForeColor = System::Drawing::Color::White;
			series4->Points->Add(dataPoint8);
			series4->Points->Add(dataPoint9);
			series4->Points->Add(dataPoint10);
			this->AgeChart->Series->Add(series4);
			this->AgeChart->Size = System::Drawing::Size(855, 350);
			this->AgeChart->TabIndex = 6;
			title4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18));
			title4->ForeColor = System::Drawing::Color::White;
			title4->Name = L"Title2";
			title4->Text = L"Age Chart";
			title4->ToolTip = L"Age Chart";
			this->AgeChart->Titles->Add(title4);
			// 
			// statistics_dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->AgeLabel);
			this->Controls->Add(this->AgeChart);
			this->Controls->Add(this->DoseLabel);
			this->Controls->Add(this->DoseChart);
			this->Controls->Add(this->CountryLabel);
			this->Controls->Add(this->GenderLabel);
			this->Controls->Add(this->CountryChart);
			this->Controls->Add(this->GenderChart);
			this->Name = L"statistics_dashboard";
			this->Text = L"Statstics Dashboard";
			this->Load += gcnew System::EventHandler(this, &statistics_dashboard::statistics_dashboard_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GenderChart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CountryChart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DoseChart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AgeChart))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void statistics_dashboard_Load(System::Object^ sender, System::EventArgs^ e);
	};
}
