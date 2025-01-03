/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlSimpleItemUpdater : NSObject <HFItemManagerDelegate, HUQuickControlItemUpdating> {
    <HUQuickControlItemHosting> * _itemHost;
    HFSimpleItemManager * _itemManager;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HUQuickControlItemHosting> *itemHost;
@property (nonatomic, readonly) HFSimpleItemManager *itemManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setExternalItemManagerUpdatesDisabled:(bool)arg1;
- (id)init;
- (id)initWithItemHost:(id)arg1;
- (id)itemHost;
- (id)itemManager;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (void)quickControlItemHost:(id)arg1 didUpdateVisibility:(bool)arg2;

@end
