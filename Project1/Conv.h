#pragma once
#include <ctime>
#include <msclr\marshal_cppstd.h>

using namespace System;

ref class conv
{

	static DateTime time_t2DateTime(std::time_t date) {
		double sec = static_cast<double>(date);
		return DateTime(1970, 1, 1, 0, 0, 0, DateTimeKind::Utc).AddSeconds(sec);
	}
	static std::time_t DateTime2time_t(DateTime date) {
		TimeSpan diff = date.ToUniversalTime() - DateTime(1970, 1, 1);
		return static_cast<std::time_t>(diff.TotalSeconds);
	}

	static std::string Date2String(time_t t)
	{
		return Date2String(time_t2DateTime(t));
	}

	static std::string Date2String(DateTime dt)
	{
		System::String^ y = System::String::Concat(dt.Year.ToString(), "-");
		System::String^ m = System::String::Concat(dt.Month.ToString(), "-");
		System::String^ date = System::String::Concat(m, y);
		date = System::String::Concat(date, dt.Day.ToString());
		return msclr::interop::marshal_as<std::string>(date);

	}
};