using System;
using System.Diagnostics;

namespace sw_if_time_comp
{
	class Program
	{
		const int LOOP_TIME = 3000;
		static void Main(string[] args)
		{
			Stopwatch stopw_for = new Stopwatch();
			Stopwatch stopw_sw = new Stopwatch();
			Stopwatch stopw_if = new Stopwatch();
			Console.WriteLine("Loop continue for {0} times.", LOOP_TIME);
			Console.WriteLine("Press any key to start for-only section");
			_ = Console.ReadKey();
			stopw_for.Start();
			for (int i = 0; i < LOOP_TIME; i++) ValCheck_Blank.ValCheck(i);
			stopw_for.Stop();
			Console.WriteLine("Press any key to start switch section");
			_ = Console.ReadKey();
			stopw_sw.Start();
			for (int i = 0; i < LOOP_TIME; i++) ValCheck_SW.ValCheck(i);
			stopw_sw.Stop();
			Console.WriteLine("Press any key to start if section");
			_ = Console.ReadKey();
			stopw_if.Start();
			for (int i = 0; i < LOOP_TIME; i++) ValCheck_IF.ValCheck(i);
			stopw_if.Stop();
			Console.WriteLine("Completed.\tTicksPerMillisecond:{0}\tfor:{1}\tswitch:{2}\tif:{3}", TimeSpan.TicksPerMillisecond, stopw_for.ElapsedTicks, stopw_sw.ElapsedTicks, stopw_if.ElapsedTicks);
			Console.WriteLine("Press any key to exit this app");
			_ = Console.ReadKey();
		}

		static int rs_v = 0;
		static public void WhenMatched(in int val)
		{
			rs_v = val >> 1;
		}

	}
}
