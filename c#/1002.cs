using System;

namespace Uri {
    class Uri {
        static void Main(string[] args) {
            double raio = Convert.ToDouble(Console.ReadLine());
            double pi = 3.14159;
            Console.WriteLine("A={0:F4}", pi*raio*raio);
        }
    }
}
