/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSDisplayProgressIndicatorProperties : NSObject <BSDescriptionProviding, NSSecureCoding> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _position;
    long long  _style;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } position;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;

+ (id)progressIndicatorWithStyle:(long long)arg1 position:(struct CGPoint { double x1; double x2; })arg2;
+ (bool)supportsSecureCoding;

- (id)_initWithStyle:(long long)arg1 position:(struct CGPoint { double x1; double x2; })arg2;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })position;
- (long long)style;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
