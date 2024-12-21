/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI
 */

@interface MUWebUIMenuActionManager : NSObject <MUWebUIMenuActionHandler> {
    NSArray * _externalActionViewModels;
    MUPlaceActionManager * _placeActionManager;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *externalActionViewModels;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MUPlaceActionManager *placeActionManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_buttonItemTypeFromMUUserInteractionType:(int)arg1;
- (id)externalActionViewModels;
- (id)initWithPlaceActionManager:(id)arg1 mapItem:(id)arg2 externalActionViewModel:(id)arg3;
- (void)performActionUsingArguments:(id)arg1 contextMenu:(id)arg2 completion:(id /* block */)arg3;
- (void)performActionWithAction:(id)arg1 contextMenu:(id)arg2 completion:(id /* block */)arg3;
- (id)placeActionManager;
- (void)setExternalActionViewModels:(id)arg1;
- (void)setPlaceActionManager:(id)arg1;

@end