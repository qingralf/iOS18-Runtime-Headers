/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationCoreUI.framework/LocalAuthenticationCoreUI
 */

@interface LACUIPackagedViewState : NSObject {
    LACUIPackagedViewStateAnimationOptions * _animationOptions;
    NSString * _name;
    NSMutableArray * _substates;
}

@property (nonatomic, retain) LACUIPackagedViewStateAnimationOptions *animationOptions;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSMutableArray *substates;

- (void).cxx_destruct;
- (void)addSubstate:(id)arg1;
- (id)animationOptions;
- (bool)containsStateNamed:(id)arg1;
- (id)description;
- (bool)finishesWithStateNamed:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 animationOptions:(id)arg2;
- (id)name;
- (void)setAnimationOptions:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSubstates:(id)arg1;
- (id)substates;

@end