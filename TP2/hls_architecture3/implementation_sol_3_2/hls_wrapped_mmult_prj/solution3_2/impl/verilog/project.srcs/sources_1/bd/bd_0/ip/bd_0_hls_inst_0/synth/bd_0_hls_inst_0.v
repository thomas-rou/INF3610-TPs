// (c) Copyright 1995-2024 Xilinx, Inc. All rights reserved.
// 
// This file contains confidential and proprietary information
// of Xilinx, Inc. and is protected under U.S. and
// international copyright and other intellectual property
// laws.
// 
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// Xilinx, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) Xilinx shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or Xilinx had been advised of the
// possibility of the same.
// 
// CRITICAL APPLICATIONS
// Xilinx products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of Xilinx products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
// 
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
// 
// DO NOT MODIFY THIS FILE.


// IP VLNV: xilinx.com:hls:HLS_accel:1.0
// IP Revision: 2113518546

(* X_CORE_INFO = "HLS_accel,Vivado 2018.3" *)
(* CHECK_LICENSE_TYPE = "bd_0_hls_inst_0,HLS_accel,{}" *)
(* CORE_GENERATION_INFO = "bd_0_hls_inst_0,HLS_accel,{x_ipProduct=Vivado 2018.3,x_ipVendor=xilinx.com,x_ipLibrary=hls,x_ipName=HLS_accel,x_ipVersion=1.0,x_ipCoreRevision=2113518546,x_ipLanguage=VERILOG,x_ipSimLanguage=MIXED,C_S_AXI_CONTROL_BUS_ADDR_WIDTH=4,C_S_AXI_CONTROL_BUS_DATA_WIDTH=32}" *)
(* IP_DEFINITION_SOURCE = "HLS" *)
(* DowngradeIPIdentifiedWarnings = "yes" *)
module bd_0_hls_inst_0 (
  s_axi_CONTROL_BUS_AWADDR,
  s_axi_CONTROL_BUS_AWVALID,
  s_axi_CONTROL_BUS_AWREADY,
  s_axi_CONTROL_BUS_WDATA,
  s_axi_CONTROL_BUS_WSTRB,
  s_axi_CONTROL_BUS_WVALID,
  s_axi_CONTROL_BUS_WREADY,
  s_axi_CONTROL_BUS_BRESP,
  s_axi_CONTROL_BUS_BVALID,
  s_axi_CONTROL_BUS_BREADY,
  s_axi_CONTROL_BUS_ARADDR,
  s_axi_CONTROL_BUS_ARVALID,
  s_axi_CONTROL_BUS_ARREADY,
  s_axi_CONTROL_BUS_RDATA,
  s_axi_CONTROL_BUS_RRESP,
  s_axi_CONTROL_BUS_RVALID,
  s_axi_CONTROL_BUS_RREADY,
  ap_clk,
  ap_rst_n,
  interrupt,
  INPUT_STREAM_TVALID,
  INPUT_STREAM_TREADY,
  INPUT_STREAM_TDATA,
  INPUT_STREAM_TDEST,
  INPUT_STREAM_TKEEP,
  INPUT_STREAM_TSTRB,
  INPUT_STREAM_TUSER,
  INPUT_STREAM_TLAST,
  INPUT_STREAM_TID,
  OUTPUT_STREAM_TVALID,
  OUTPUT_STREAM_TREADY,
  OUTPUT_STREAM_TDATA,
  OUTPUT_STREAM_TDEST,
  OUTPUT_STREAM_TKEEP,
  OUTPUT_STREAM_TSTRB,
  OUTPUT_STREAM_TUSER,
  OUTPUT_STREAM_TLAST,
  OUTPUT_STREAM_TID
);

(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CONTROL_BUS AWADDR" *)
input wire [3 : 0] s_axi_CONTROL_BUS_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CONTROL_BUS AWVALID" *)
input wire s_axi_CONTROL_BUS_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CONTROL_BUS AWREADY" *)
output wire s_axi_CONTROL_BUS_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CONTROL_BUS WDATA" *)
input wire [31 : 0] s_axi_CONTROL_BUS_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CONTROL_BUS WSTRB" *)
input wire [3 : 0] s_axi_CONTROL_BUS_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CONTROL_BUS WVALID" *)
input wire s_axi_CONTROL_BUS_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CONTROL_BUS WREADY" *)
output wire s_axi_CONTROL_BUS_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CONTROL_BUS BRESP" *)
output wire [1 : 0] s_axi_CONTROL_BUS_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CONTROL_BUS BVALID" *)
output wire s_axi_CONTROL_BUS_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CONTROL_BUS BREADY" *)
input wire s_axi_CONTROL_BUS_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CONTROL_BUS ARADDR" *)
input wire [3 : 0] s_axi_CONTROL_BUS_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CONTROL_BUS ARVALID" *)
input wire s_axi_CONTROL_BUS_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CONTROL_BUS ARREADY" *)
output wire s_axi_CONTROL_BUS_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CONTROL_BUS RDATA" *)
output wire [31 : 0] s_axi_CONTROL_BUS_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CONTROL_BUS RRESP" *)
output wire [1 : 0] s_axi_CONTROL_BUS_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CONTROL_BUS RVALID" *)
output wire s_axi_CONTROL_BUS_RVALID;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME s_axi_CONTROL_BUS, ADDR_WIDTH 4, DATA_WIDTH 32, PROTOCOL AXI4LITE, READ_WRITE_MODE READ_WRITE, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {CLK {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}, FREQ_HZ 1000000\
00.0, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 0, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 1, NUM_WRITE_OUTSTANDING 1, MAX_BURST_LENGTH 1, PHASE 0.000, CLK_DOMAIN bd_0_ap_clk_0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CONTROL_BUS RREADY" *)
input wire s_axi_CONTROL_BUS_RREADY;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_clk, ASSOCIATED_BUSIF s_axi_CONTROL_BUS:INPUT_STREAM:OUTPUT_STREAM, ASSOCIATED_RESET ap_rst_n, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {CLK {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}, FREQ_HZ 1000\
00000.0, PHASE 0.000, CLK_DOMAIN bd_0_ap_clk_0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 ap_clk CLK" *)
input wire ap_clk;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_rst_n, POLARITY ACTIVE_LOW, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {RST {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 ap_rst_n RST" *)
input wire ap_rst_n;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME interrupt, SENSITIVITY LEVEL_HIGH, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {INTERRUPT {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}, PortWidth 1" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:interrupt:1.0 interrupt INTERRUPT" *)
output wire interrupt;
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 INPUT_STREAM TVALID" *)
input wire INPUT_STREAM_TVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 INPUT_STREAM TREADY" *)
output wire INPUT_STREAM_TREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 INPUT_STREAM TDATA" *)
input wire [7 : 0] INPUT_STREAM_TDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 INPUT_STREAM TDEST" *)
input wire [4 : 0] INPUT_STREAM_TDEST;
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 INPUT_STREAM TKEEP" *)
input wire [0 : 0] INPUT_STREAM_TKEEP;
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 INPUT_STREAM TSTRB" *)
input wire [0 : 0] INPUT_STREAM_TSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 INPUT_STREAM TUSER" *)
input wire [3 : 0] INPUT_STREAM_TUSER;
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 INPUT_STREAM TLAST" *)
input wire [0 : 0] INPUT_STREAM_TLAST;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME INPUT_STREAM, TDATA_NUM_BYTES 1, TDEST_WIDTH 5, TID_WIDTH 5, TUSER_WIDTH 4, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {TDATA {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 8} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0} integer {signed {attribs {resolve_ty\
pe immediate dependency {} format bool minimum {} maximum {}} value false}}}} TUSER {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 4} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0} integer {signed {attribs {resolve_type immediate dependency {} format bool minimum {} maximum {}} value f\
alse}}}}}, HAS_TREADY 1, HAS_TSTRB 1, HAS_TKEEP 1, HAS_TLAST 1, FREQ_HZ 100000000.0, PHASE 0.000, CLK_DOMAIN bd_0_ap_clk_0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 INPUT_STREAM TID" *)
input wire [4 : 0] INPUT_STREAM_TID;
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 OUTPUT_STREAM TVALID" *)
output wire OUTPUT_STREAM_TVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 OUTPUT_STREAM TREADY" *)
input wire OUTPUT_STREAM_TREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 OUTPUT_STREAM TDATA" *)
output wire [7 : 0] OUTPUT_STREAM_TDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 OUTPUT_STREAM TDEST" *)
output wire [4 : 0] OUTPUT_STREAM_TDEST;
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 OUTPUT_STREAM TKEEP" *)
output wire [0 : 0] OUTPUT_STREAM_TKEEP;
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 OUTPUT_STREAM TSTRB" *)
output wire [0 : 0] OUTPUT_STREAM_TSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 OUTPUT_STREAM TUSER" *)
output wire [3 : 0] OUTPUT_STREAM_TUSER;
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 OUTPUT_STREAM TLAST" *)
output wire [0 : 0] OUTPUT_STREAM_TLAST;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME OUTPUT_STREAM, TDATA_NUM_BYTES 1, TDEST_WIDTH 5, TID_WIDTH 5, TUSER_WIDTH 4, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {CLK {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}} TDATA {datatype {name {attribs {res\
olve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 8} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0} integer {signed {attribs {resolve_type immediate dependency {} format bool minimum {} maximum {}} value false}}}} TDATA_WIDTH 8 TUSER {datatype {name {attribs {resolve_type immediate dependency {} format string minimum\
 {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 4} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0} integer {signed {attribs {resolve_type immediate dependency {} format bool minimum {} maximum {}} value false}}}} TUSER_WIDTH 4}, HAS_TREADY 1, HAS_TSTRB 1, HAS_TKEEP 1, HAS_TLAST 1, FREQ_HZ 100000000.0, PHASE 0.000, CLK_DOMAIN bd_0_ap_clk_0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 OUTPUT_STREAM TID" *)
output wire [4 : 0] OUTPUT_STREAM_TID;

  HLS_accel #(
    .C_S_AXI_CONTROL_BUS_ADDR_WIDTH(4),
    .C_S_AXI_CONTROL_BUS_DATA_WIDTH(32)
  ) inst (
    .s_axi_CONTROL_BUS_AWADDR(s_axi_CONTROL_BUS_AWADDR),
    .s_axi_CONTROL_BUS_AWVALID(s_axi_CONTROL_BUS_AWVALID),
    .s_axi_CONTROL_BUS_AWREADY(s_axi_CONTROL_BUS_AWREADY),
    .s_axi_CONTROL_BUS_WDATA(s_axi_CONTROL_BUS_WDATA),
    .s_axi_CONTROL_BUS_WSTRB(s_axi_CONTROL_BUS_WSTRB),
    .s_axi_CONTROL_BUS_WVALID(s_axi_CONTROL_BUS_WVALID),
    .s_axi_CONTROL_BUS_WREADY(s_axi_CONTROL_BUS_WREADY),
    .s_axi_CONTROL_BUS_BRESP(s_axi_CONTROL_BUS_BRESP),
    .s_axi_CONTROL_BUS_BVALID(s_axi_CONTROL_BUS_BVALID),
    .s_axi_CONTROL_BUS_BREADY(s_axi_CONTROL_BUS_BREADY),
    .s_axi_CONTROL_BUS_ARADDR(s_axi_CONTROL_BUS_ARADDR),
    .s_axi_CONTROL_BUS_ARVALID(s_axi_CONTROL_BUS_ARVALID),
    .s_axi_CONTROL_BUS_ARREADY(s_axi_CONTROL_BUS_ARREADY),
    .s_axi_CONTROL_BUS_RDATA(s_axi_CONTROL_BUS_RDATA),
    .s_axi_CONTROL_BUS_RRESP(s_axi_CONTROL_BUS_RRESP),
    .s_axi_CONTROL_BUS_RVALID(s_axi_CONTROL_BUS_RVALID),
    .s_axi_CONTROL_BUS_RREADY(s_axi_CONTROL_BUS_RREADY),
    .ap_clk(ap_clk),
    .ap_rst_n(ap_rst_n),
    .interrupt(interrupt),
    .INPUT_STREAM_TVALID(INPUT_STREAM_TVALID),
    .INPUT_STREAM_TREADY(INPUT_STREAM_TREADY),
    .INPUT_STREAM_TDATA(INPUT_STREAM_TDATA),
    .INPUT_STREAM_TDEST(INPUT_STREAM_TDEST),
    .INPUT_STREAM_TKEEP(INPUT_STREAM_TKEEP),
    .INPUT_STREAM_TSTRB(INPUT_STREAM_TSTRB),
    .INPUT_STREAM_TUSER(INPUT_STREAM_TUSER),
    .INPUT_STREAM_TLAST(INPUT_STREAM_TLAST),
    .INPUT_STREAM_TID(INPUT_STREAM_TID),
    .OUTPUT_STREAM_TVALID(OUTPUT_STREAM_TVALID),
    .OUTPUT_STREAM_TREADY(OUTPUT_STREAM_TREADY),
    .OUTPUT_STREAM_TDATA(OUTPUT_STREAM_TDATA),
    .OUTPUT_STREAM_TDEST(OUTPUT_STREAM_TDEST),
    .OUTPUT_STREAM_TKEEP(OUTPUT_STREAM_TKEEP),
    .OUTPUT_STREAM_TSTRB(OUTPUT_STREAM_TSTRB),
    .OUTPUT_STREAM_TUSER(OUTPUT_STREAM_TUSER),
    .OUTPUT_STREAM_TLAST(OUTPUT_STREAM_TLAST),
    .OUTPUT_STREAM_TID(OUTPUT_STREAM_TID)
  );
endmodule
