library verilog;
use verilog.vl_types.all;
entity cau1 is
    port(
        F               : out    vl_logic_vector(3 downto 0);
        a               : in     vl_logic_vector(3 downto 0);
        b               : in     vl_logic_vector(3 downto 0)
    );
end cau1;
