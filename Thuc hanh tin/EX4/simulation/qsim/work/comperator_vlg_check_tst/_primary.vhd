library verilog;
use verilog.vl_types.all;
entity comperator_vlg_check_tst is
    port(
        eq              : in     vl_logic;
        gt              : in     vl_logic;
        lt              : in     vl_logic;
        sampler_rx      : in     vl_logic
    );
end comperator_vlg_check_tst;
