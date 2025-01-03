/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSOfflineSearchRemoteDisablementSnapshot : NSObject <WBSRemotelyUpdatableDataSnapshot> {
    NSDictionary * _disablementDictionary;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isCurrentSafariVersionDisabled:(id)arg1;
- (bool)areOfflineSearchSuggestionsDisabledRemotelyForSearchProvider:(id)arg1;
- (id)initWithSnapshotData:(id)arg1 error:(id*)arg2;
- (id)snapshotData;

@end
