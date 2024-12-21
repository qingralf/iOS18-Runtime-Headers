/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCConnectionIDS : VCConnection <VCConnectionProtocol> {
    NSString * _channelDataBaseProtocolStackDescription;
    int  _connectionMTU;
    VCDatagramChannelIDS * _datagramChannel;
    unsigned int  _datagramChannelToken;
    unsigned int  _downlinkBitrateCap;
    bool  _isLocalDelegated;
    bool  _isQUICPod;
    bool  _isRemoteDelegated;
    bool  _isVirtualRelayLink;
    long long  _linkConnectionType;
    IDSDataChannelLinkContext * _linkContext;
    int  _localCellTech;
    int  _maxConnectionMTU;
    NSString * _relayProtocolStackDescription;
    int  _remoteCellTech;
    unsigned int  _type;
    unsigned int  _uplinkAudioBitrateCapOneToOne;
    unsigned int  _uplinkBitrateCap;
    unsigned int  _uplinkBitrateCapOneToOne;
}

@property (copy) NSString *channelDataBaseProtocolStackDescription;
@property int connectionMTU;
@property (readonly) NSUUID *connectionUUID;
@property (readonly) VCDatagramChannelIDS *datagramChannel;
@property (readonly) unsigned int datagramChannelToken;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property unsigned int downlinkBitrateCap;
@property (readonly) unsigned long long hash;
@property (readonly) bool isLocalDelegated;
@property (readonly) bool isLocalOn5G;
@property bool isQUICPod;
@property (readonly) bool isRemoteDelegated;
@property (readonly) bool isRemoteOn5G;
@property (readonly) bool isVPN;
@property (readonly) bool isVirtualRelayLink;
@property (readonly) bool isWifiToWifi;
@property (readonly) long long linkConnectionType;
@property (readonly) int localConnectionType;
@property (readonly) NSString *localInterfaceName;
@property (readonly) NSString *localInterfaceTypeString;
@property int maxConnectionMTU;
@property (copy) NSString *relayProtocolStackDescription;
@property (readonly) NSString *relaySessionToken;
@property (readonly) int remoteConnectionType;
@property (readonly) NSString *remoteInterfaceTypeString;
@property (readonly) bool serverIsDegraded;
@property (readonly) NSData *sharedDigestKey;
@property (readonly) Class superclass;
@property (readonly) unsigned int type;
@property unsigned int uplinkAudioBitrateCapOneToOne;
@property unsigned int uplinkBitrateCap;
@property unsigned int uplinkBitrateCapOneToOne;

+ (id)VCConnectionIDS_CDBPS:(id)arg1;
+ (id)VCConnectionIDS_RPS:(id)arg1;
+ (unsigned int)worstCaseNetworkOverheadInBytesWithNumOfStreamId:(int)arg1 isPriorityIncluded:(bool)arg2;

- (int)cellTechForSoMask:(unsigned int)arg1 fallbackTo:(int)arg2;
- (id)channelDataBaseProtocolStackDescription;
- (int)connectionMTU;
- (id)connectionQRSessionID;
- (id)connectionUUID;
- (id)datagramChannel;
- (unsigned int)datagramChannelToken;
- (void)dealloc;
- (id)description;
- (unsigned int)downlinkBitrateCap;
- (id)initWithLinkContext:(id)arg1 dataChannelToken:(unsigned int)arg2;
- (bool)isLocalDelegated;
- (bool)isLocalOn5G;
- (bool)isOnSameInterfacesAndQRSessionWithConnection:(id)arg1;
- (bool)isOnSameQRSessionWithConnection:(id)arg1;
- (bool)isQUICPod;
- (bool)isRemoteDelegated;
- (bool)isRemoteOn5G;
- (bool)isVPN;
- (bool)isVirtualRelayLink;
- (bool)isWifiToWifi;
- (long long)linkConnectionType;
- (int)localConnectionType;
- (id)localInterfaceName;
- (id)localInterfaceTypeString;
- (int)maxConnectionMTU;
- (id)relayProtocolStackDescription;
- (id)relaySessionToken;
- (int)remoteConnectionType;
- (id)remoteInterfaceTypeString;
- (bool)serverIsDegraded;
- (void)setCellularMTU:(int)arg1;
- (void)setChannelDataBaseProtocolStackDescription:(id)arg1;
- (void)setConnectionMTU:(int)arg1;
- (void)setDownlinkBitrateCap:(unsigned int)arg1;
- (void)setIsQUICPod:(bool)arg1;
- (void)setMaxConnectionMTU:(int)arg1;
- (void)setRelayProtocolStackDescription:(id)arg1;
- (void)setUpVTable;
- (void)setUplinkAudioBitrateCapOneToOne:(unsigned int)arg1;
- (void)setUplinkBitrateCap:(unsigned int)arg1;
- (void)setUplinkBitrateCapOneToOne:(unsigned int)arg1;
- (id)sharedDigestKey;
- (unsigned int)type;
- (unsigned short)updateMaxConnectionMTU:(unsigned short)arg1;
- (unsigned int)uplinkAudioBitrateCapOneToOne;
- (unsigned int)uplinkBitrateCap;
- (unsigned int)uplinkBitrateCapOneToOne;

@end