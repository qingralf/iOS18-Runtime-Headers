/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

@interface _UIActivityItemCustomizationSwitch : _UIActivityItemCustomization <_UIActivityItemCustomizationSwitch> {
    id /* block */  __handler;
    bool  _value;
}

@property (setter=_setHandler:, nonatomic, copy) id /* block */ _handler;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)_handler;
- (void)_setHandler:(id /* block */)arg1;
- (void)_setValue:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 value:(bool)arg3 footerText:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)value;

@end
