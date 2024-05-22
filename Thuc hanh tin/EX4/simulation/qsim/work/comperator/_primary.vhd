library verilog;
use verilog.vl_types.all;
entity comperator is
    port(
        lt              : out    vl_logic;
        a0              : in     vl_logic;
        b0              : in     vl_logic;
        a1              : in     vl_logic;
        b1              : in     vl_logic;
        a2              : in     vl_logic;
        b2              : in     vl_logic;
        a3              : in     vl_logic;
        b3              : in     vl_logic;
        eq              : out    vl_logic;
        gt              : out    vl_logic
    );
end comperator;
