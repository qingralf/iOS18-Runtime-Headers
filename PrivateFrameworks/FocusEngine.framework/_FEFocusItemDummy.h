/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FocusEngine.framework/FocusEngine
 */

@interface _FEFocusItemDummy : NSObject <_FEFocusItem> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __focusFrame;
    <_FEFocusEnvironment> * __parentFocusEnvironment;
}

@property (nonatomic, readonly) bool _canBecomeFocused;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _focusFrame;
@property (nonatomic, readonly, copy) NSString *_focusGroupIdentifier; /* unknown property attribute: ? */
@property (nonatomic, readonly) long long _focusGroupPriority; /* unknown property attribute: ? */
@property (nonatomic, readonly) <_FEFocusItemContainer> *_focusItemContainer;
@property (nonatomic, readonly) bool _isTransparentFocusItem; /* unknown property attribute: ? */
@property (nonatomic) <_FEFocusEnvironment> *_parentFocusEnvironment;
@property (nonatomic, readonly, copy) NSArray *_preferredFocusEnvironments; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canBecomeFocused;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_focusFrame;
- (id)_focusItemContainer;
- (id)_parentFocusEnvironment;
- (id)_preferredFocusEnvironments;
- (void)set_focusFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_parentFocusEnvironment:(id)arg1;

@end