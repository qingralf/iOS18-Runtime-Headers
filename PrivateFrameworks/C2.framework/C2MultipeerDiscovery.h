/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/C2.framework/C2
 */

@interface C2MultipeerDiscovery : NSObject {
    NSObject<OS_nw_browser> * _browser;
    NSObject<OS_dispatch_source> * _browserTimer;
    NSObject<OS_nw_listener> * _listener;
    NSUUID * _myPeerID;
    C2Multipeer * _parent;
}

@property (nonatomic, retain) NSObject<OS_nw_browser> *browser;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *browserTimer;
@property (nonatomic, retain) NSObject<OS_nw_listener> *listener;
@property (nonatomic, retain) NSUUID *myPeerID;
@property (nonatomic) C2Multipeer *parent;

- (void).cxx_destruct;
- (id)_browser;
- (id)_listener;
- (id)_peerToPeerParameters;
- (id)browser;
- (id)browserTimer;
- (id)initWithParent:(id)arg1;
- (id)listener;
- (id)myPeerID;
- (id)parent;
- (void)resetTimer;
- (void)setBrowser:(id)arg1;
- (void)setBrowserTimer:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setMyPeerID:(id)arg1;
- (void)setParent:(id)arg1;
- (void)startTimer;
- (void)touch;

@end
