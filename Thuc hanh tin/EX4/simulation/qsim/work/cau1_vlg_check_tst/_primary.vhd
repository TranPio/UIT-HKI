library verilog;
use verilog.vl_types.all;
entity cau1_vlg_check_tst is
    port(
        F               : in     vl_logic_vector(3 downto 0);
        sampler_rx      : in     vl_logic
    );
end cau1_vlg_check_tst;
