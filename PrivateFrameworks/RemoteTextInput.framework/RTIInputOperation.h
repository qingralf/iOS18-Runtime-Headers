/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
 */

@interface RTIInputOperation : NSObject <NSSecureCoding, RTICustomDataProtocol> {
    SEL  _actionSelector;
    NSObject<NSSecureCoding> * _customInfo;
    NSString * _customInfoType;
    int  _inputModality;
    TIKeyboardInput * _keyboardInput;
}

@property (nonatomic) SEL actionSelector;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } contentTransform;
@property (nonatomic, retain) NSObject<NSSecureCoding> *customInfo;
@property (nonatomic, retain) NSString *customInfoType;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } environmentTransform;
@property (readonly) unsigned long long hash;
@property (nonatomic) int inputModality;
@property (nonatomic, readonly) bool isScrollingInputOperation;
@property (nonatomic, retain) TIKeyboardInput *keyboardInput;
@property (nonatomic, readonly) unsigned long long scrollType;
@property (readonly) Class superclass;

+ (unsigned long long)_scrollTypeForString:(id)arg1;
+ (id)_stringForScrollType:(unsigned long long)arg1;
+ (void)registerClassesForScrollingInputOperations;
+ (void)registerCustomInfoClasses:(id)arg1 forType:(id)arg2;
+ (id)scrollingInputOperationWithType:(unsigned long long)arg1 contentTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 environmentTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
+ (bool)supportsSecureCoding;
+ (void)unregisterClassesForScrollingInputOperations;
+ (void)unregisterCustomInfoType:(id)arg1;

- (void).cxx_destruct;
- (SEL)actionSelector;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })contentTransform;
- (id)customInfo;
- (id)customInfoType;
- (void)encodeWithCoder:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })environmentTransform;
- (id)initWithCoder:(id)arg1;
- (int)inputModality;
- (bool)isEqual:(id)arg1;
- (bool)isScrollingInputOperation;
- (id)keyboardInput;
- (unsigned long long)scrollType;
- (void)setActionSelector:(SEL)arg1;
- (void)setCustomInfo:(id)arg1;
- (void)setCustomInfoType:(id)arg1;
- (void)setInputModality:(int)arg1;
- (void)setKeyboardInput:(id)arg1;

@end
