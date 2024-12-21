/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPNWActivityMessageMetrics : RPNWActivityMetrics {
    int  _linkType;
    unsigned long long  _messageSize;
    int  _messageType;
    NSString * _peerDeviceModel;
    NSString * _peerOSVersion;
}

@property (nonatomic) int linkType;
@property (nonatomic) unsigned long long messageSize;
@property (nonatomic) int messageType;
@property (nonatomic, retain) NSString *peerDeviceModel;
@property (nonatomic, readonly) NSString *peerOSVersion;

+ (id)startMessageMetrics:(int)arg1 withParent:(id)arg2;

- (void).cxx_destruct;
- (id)_metricsDictionary;
- (int)linkType;
- (unsigned long long)messageSize;
- (int)messageType;
- (id)peerDeviceModel;
- (id)peerOSVersion;
- (void)setLinkType:(int)arg1;
- (void)setMessageSize:(unsigned long long)arg1;
- (void)setMessageType:(int)arg1;
- (void)setPeerDeviceModel:(id)arg1;
- (void)setPeerOSVersion:(struct { long long x1; long long x2; long long x3; })arg1;

@end