using MySql.Data.MySqlClient;
using System.Windows.Forms;
namespace CarsProject
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            List<string> results = new List<string>();

            // colors
            List<string> colors = new List<string>();
            if (checkBox9.Checked) colors.Add(checkBox9.Text);
            if (checkBox10.Checked) colors.Add(checkBox10.Text);
            if (checkBox14.Checked) colors.Add(checkBox14.Text);
            if (checkBox13.Checked) colors.Add(checkBox13.Text);
            if (checkBox12.Checked) colors.Add(checkBox12.Text);
            if (checkBox11.Checked) colors.Add(checkBox11.Text);
            //foreach (string color in colors)
            //{
            //    MessageBox.Show(color);
            //}

            // handle car type
            List<string> type = new List<string>();
            if (textBox1.Text.Length > 0) type.Add(textBox1.Text);
            if (checkBox2.Checked) type.Add(checkBox2.Text);
            if (checkBox3.Checked) type.Add(checkBox3.Text);
            if (checkBox4.Checked) type.Add(checkBox4.Text);
            if (checkBox5.Checked) type.Add(checkBox5.Text);
            if (checkBox1.Checked) type.Add(checkBox1.Text);
            if (checkBox6.Checked) type.Add(checkBox6.Text);
            if (checkBox7.Checked) type.Add(checkBox7.Text);
            if (checkBox8.Checked) type.Add(checkBox8.Text);

            //foreach (string t in type)
            //{
            //    MessageBox.Show(t);
            //}

            // handle min price
            int minPrice = (textBox3.Text.Length > 0) ? Convert.ToInt32(textBox3.Text) : 0;
            //MessageBox.Show(Convert.ToString(minPrice));

            // handle max price
            int maxPrice = (textBox2.Text.Length > 0) ? Convert.ToInt32(textBox2.Text) : 100000000;
            //MessageBox.Show(Convert.ToString(maxPrice));

            // handle min kilo
            int minKilo = (textBox4.Text.Length > 0) ? Convert.ToInt32(textBox4.Text) : 0;
            //MessageBox.Show(Convert.ToString(minKilo));

            // handle max max kilo
            int maxKilo = (textBox5.Text.Length > 0) ? Convert.ToInt32(textBox5.Text) : 2000000;
            //MessageBox.Show(Convert.ToString(maxKilo));

            // connect to database -----------------------------------------------------------------
            // Connection string (replace placeholders with your values)
            string connectionString = "Server=localhost;Database=Car;User=root;Password=root;";

            // Create the connection object
            MySqlConnection connection = new MySqlConnection(connectionString);

            try
            {
                // Open the connection
                connection.Open();

                // Execute a query
                string query = "SELECT * FROM cars WHERE ";
                if (type.Count > 0)
                {
                    query += "(";
                }
                foreach (string t in type)
                {
                    query += "model LIKE \'" + t + "%\' OR ";
                }

                if (type.Count > 0)
                {
                    query = query.Substring(0, query.Length - 3);
                    query += " )AND ";
                }

                if (colors.Count > 0)
                {
                    query += "(";
                }
                foreach (string color in colors)
                {
                    query += "color LIKE \'" + color + "%\' OR ";
                }
                if (colors.Count > 0)
                {
                    query = query.Substring(0, query.Length - 3);
                    query += ") AND ";
                }

                query += "price BETWEEN " + Convert.ToString(minPrice) + " AND " + Convert.ToString(maxPrice) + " AND ";
                query += "walked_kilometers BETWEEN " + Convert.ToString(minKilo) + " AND " + Convert.ToString(maxKilo);

                MessageBox.Show(query);
                Console.WriteLine(query);

                MySqlCommand command = new MySqlCommand(query, connection);

                MySqlDataReader reader = command.ExecuteReader();
                while (reader.Read())
                {
                    string model = reader["model"].ToString();
                    string color = reader["color"].ToString();
                    string price = reader["price"].ToString();
                    string kilometers = reader["walked_kilometers"].ToString();

                    // Combine fields for display
                    string result = $"{model}, {color}, {price}, {kilometers}";
                    results.Add(result);
                }

                // Close the reader explicitly (optional, as closing the connection will also close the reader)
                reader.Close();
            }
            finally
            {
                // Close the connection explicitly
                connection.Close();
            }

            Form2 form2 = new Form2(results);
            form2.Show();
        }
    }
}
