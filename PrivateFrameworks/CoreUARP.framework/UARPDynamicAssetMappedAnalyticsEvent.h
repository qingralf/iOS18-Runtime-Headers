/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
 */

@interface UARPDynamicAssetMappedAnalyticsEvent : NSObject {
    UARPSuperBinaryAsset * _asset;
    NSMutableArray * _coreAnalyticsEvents;
    NSObject<OS_os_log> * _log;
    NSMutableArray * _payloads;
    UARPDynamicAssetTmapDatabase * _tmapDatabase;
    NSURL * _url;
}

+ (id)tag;

- (void).cxx_destruct;
- (bool)decomposeUARP;
- (id)description;
- (bool)expandMTICPayloads;
- (bool)findMatchingTMAP;
- (bool)getAppleModelNumber:(id)arg1 inPayload:(id)arg2;
- (bool)getEventID:(unsigned int*)arg1 inPayload:(id)arg2;
- (id)init;
- (id)initWithURL:(id)arg1;
- (bool)prepareAndSend;
- (void)send;

@end
