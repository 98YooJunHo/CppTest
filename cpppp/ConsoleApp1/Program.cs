using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    public class Program                  // 클래스 내부의 함수(멤버함수)를 메서드 라고한다
    {
        static void Main(string[] args)     // 스태틱 메서드는 스태틱 메서드만 부를수 있음
        {
            Random random = new Random();
            int[] lottery = new int[6];

            for(int i =0; i<lottery.Length; i++)
            {
                lottery[i] = random.Next(1, 45);
            }

            

            foreach(int lottery_ in lottery)
            {
                Console.Write("{0} ", lottery_);
                //Task.Delay(1000).Wait();
                Thread.Sleep(1000);
                
            }
            Console.WriteLine();
            //Description1();

        }


        static void PrintMyArray(int[,] array_)
        {
            for (int y = 0; y < 5; y++)
            {
                for (int x = 0; x < 5; x++)
                {

                    Console.Write("{0} ", array_[y, x]);
                }
                Console.WriteLine();
            }
            Console.WriteLine();
        }           //PrintMyArray

        static void Description1()
        {
            int[] numbers = new int[5];
            int[,] numbers2 = new int[5, 5];

            int valueCount = 0;

            for (int y = 0; y < 5; y++)
            {
                for (int x = 0; x < 5; x++)
                {
                    valueCount += 1;
                    numbers2[y, x] = valueCount;
                }
            }

            PrintMyArray(numbers2);

            //for (int y = 0; y < 5; y++)
            //{
            //    for (int x = 0; x < 5; x++)
            //    {

            //        Console.Write("{0} ",numbers2[y, x]);
            //    }
            //    Console.WriteLine();
            //}
            //Console.WriteLine();

            //for (int y = 0; y < 5; y++)
            //{
            //    for (int x = 0; x < 5; x++)
            //    {

            //        Console.WriteLine("numbers [{0}][{1}]의 값 : {2} \n", y, x, numbers2[y, x]);
            //    }
            //    Console.WriteLine();
            //}

            Console.WriteLine("Hello World! \n");   //출력함수

            string userInput1 = default;        // 초기화를 default로 
            string userInput2 = default;

            userInput1 = Console.ReadLine();        // 입력함수
            userInput2 = Console.ReadLine();

            int userNumber1 = default;
            int userNumber2 = default;


            //userNumber1 = System.Convert.ToInt32(userInput1);
            //userNumber2 = System.Convert.ToInt32(userInput2);

            //userNumber1 = int.Parse(userInput1);
            //userNumber2 = int.Parse(userInput2);


            int.TryParse(userInput1, out userNumber1);
            int.TryParse(userInput2, out userNumber2);


            Console.WriteLine("{0} + {1} = {2}\n", userNumber1, userNumber2, userNumber1 + userNumber2);
            //Console.WriteLine("입력 받은 내용을 출력하고 싶어 -> {1}, {0} \n\n",userInput1, userInput2);

        }

    }
}
