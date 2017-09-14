let make:
  size::string? =>
  orientation::string? =>
  style::Js.t {..}? =>
  array ReasonReact.reactElement =>
  ReasonReact.component ReasonReact.stateless ReasonReact.noRetainedProps ReasonReact.actionless;
