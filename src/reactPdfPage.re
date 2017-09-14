external page : ReasonReact.reactClass = "Page" [@@bs.module "@react-pdf/core"];

let make ::size="A4" ::orientation="portrait" ::style=(Js.Obj.empty ()) children =>
  ReasonReact.wrapJsForReason
    reactClass::page props::{"size": size, "style": style, "orientation": orientation} children;
