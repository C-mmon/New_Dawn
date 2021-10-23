class MyThread implements Runnable
{
	String thread_name;
	Mythread(String name)
	{
		thread_name=l;
	}
	public void run()
	{
		System.out.println("Starting Thread "+thread_name);
		try
		{
			for(int i=0;i<400;i++)
			{
				Thread.sleep(400);
				System.out.println("In"+thread_name+",count is "+count);
			}
			catch(InterruptedException exc)
			{
				System.out.println("Thread Innterrupted");

			}
			System.out.println("Thread Execution completeted");
		}
	}
}

class User_Thread
{
	public static void main(String args[])
	{
		Mythread thread_1=Mythread("Thread_1"); //create a runnable thread
		Thread new_thread=Mythread(thread_1);
		new_thread.start()l
	}
}
