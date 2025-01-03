/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDActionGroup : NSObject {
    DDAction * _action;
    NSMutableArray * _children;
    bool  _extractedActions;
    bool  _final;
    bool  _inlinedGroup;
}

- (void).cxx_destruct;
- (id)_extractFirstAction;
- (void)_fillFlattenedActions:(id)arg1;
- (void)_regroupByService;
- (void)cleanup;
- (id)initWithActions:(id)arg1;
- (id)initWithSingleAction:(id)arg1;
- (bool)isEmpty;
- (bool)isLeaf;
- (id)nonnullChildren;
- (void)removeChild:(id)arg1;
- (void)simplify;

@end
