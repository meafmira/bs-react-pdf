external page : ReasonReact.reactClass = "Page" [@@bs.module "@react-pdf/core"];

let make ::size="A4" ::orientation="portrait" =>
  ReactPdfCommon.make page {"size": size, "orientation": orientation};
