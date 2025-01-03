/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface VFXStateTransition : NSObject <NSSecureCoding> {
    VFXState * _sourceState;
    VFXState * _targetState;
}

@property (nonatomic, readonly) VFXState *sourceState;
@property (nonatomic, readonly) VFXState *targetState;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1 andTarget:(id)arg2;
- (id)sourceState;
- (id)targetState;

@end
