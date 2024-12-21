/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFChooseFromListDataStore : NSObject <NSXPCListenerDelegate, WFDialogListItemStore> {
    NSMutableDictionary * _contentItems;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _contentItemsLock;
    NSXPCListenerEndpoint * _endpoint;
    NSXPCListener * _listener;
}

@property (nonatomic, retain) NSMutableDictionary *contentItems;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } contentItemsLock;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCListener *listener;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addContentItem:(id)arg1 withIdentifier:(id)arg2;
- (id)contentItems;
- (struct os_unfair_lock_s { unsigned int x1; })contentItemsLock;
- (id)endpoint;
- (void)hasAltTextForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)hasImageForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)hasSubtitleForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)loadAltTextWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)loadImageWithIdentifier:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (void)loadSubtitleWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)removeContentItemWithIdentifier:(id)arg1;
- (void)setContentItems:(id)arg1;

@end