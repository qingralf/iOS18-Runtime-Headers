/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

@interface CWFLocalDeviceDiscovery : NSObject {
    NSDictionary * _filteredNames;
    id /* block */  _handler;
    struct _LXLexicon { } * _lexiconEnglish;
    struct _LXLexicon { } * _lexiconUserLocale;
    NSObject<OS_mrc_cached_local_records_inquiry> * _mrcInquiry;
    NSObject<OS_dispatch_queue> * _mrcQueue;
    NSCharacterSet * _tokenizationCharacterSet;
}

@property (nonatomic, readonly) NSDictionary *filteredNames;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, retain) NSObject<OS_mrc_cached_local_records_inquiry> *mrcInquiry;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *mrcQueue;
@property (nonatomic, retain) NSCharacterSet *tokenizationCharacterSet;

- (void).cxx_destruct;
- (void)_callHandlerWithValidResults:(id)arg1 filtered:(id)arg2;
- (id)_combineDevicesWithDifferentSourceAddresses:(id)arg1;
- (bool)_filterName:(id)arg1 forLexicon:(struct _LXLexicon { }*)arg2;
- (void)_processMRCRecord:(id)arg1;
- (id)_tokenizeStringForSpecialCharacters:(id)arg1;
- (void)activate;
- (void)dealloc;
- (void)discover;
- (id)filteredNames;
- (id /* block */)handler;
- (id)init;
- (void)invalidate;
- (id)mrcInquiry;
- (id)mrcQueue;
- (void)processRecords:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setMrcInquiry:(id)arg1;
- (void)setMrcQueue:(id)arg1;
- (void)setTokenizationCharacterSet:(id)arg1;
- (id)tokenizationCharacterSet;

@end
