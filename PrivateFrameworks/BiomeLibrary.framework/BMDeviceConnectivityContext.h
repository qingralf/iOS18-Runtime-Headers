/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMDeviceConnectivityContext : BMEventBase <BMStoreData> {
    unsigned int  _actualHighBandwidth;
    unsigned int  _actualLowBandwidth;
    unsigned int  _cellARFCN;
    unsigned int  _cellBandInfo;
    unsigned int  _cellChannelBW;
    unsigned int  _cellEstimatedBW;
    unsigned int  _cellLoad;
    int  _cellLteRSRQ;
    unsigned int  _cellModelConfidenceLevel;
    int  _cellNrRSRP;
    int  _cellNrRSRQ;
    int  _cellNrSNR;
    bool  _cellNsaEnabled;
    int  _cellRsrp;
    int  _cellSinr;
    unsigned int  _cmDataSentCount;
    unsigned int  _cmDataSentDuration;
    unsigned int  _counter;
    unsigned int  _dataVersion;
    unsigned int  _estimatedHighBandwidth;
    unsigned int  _estimatedLowBandwidth;
    unsigned int  _event;
    NSString * _geohash;
    bool  _hasActualHighBandwidth;
    bool  _hasActualLowBandwidth;
    bool  _hasCellARFCN;
    bool  _hasCellBandInfo;
    bool  _hasCellChannelBW;
    bool  _hasCellEstimatedBW;
    bool  _hasCellLoad;
    bool  _hasCellLteRSRQ;
    bool  _hasCellModelConfidenceLevel;
    bool  _hasCellNrRSRP;
    bool  _hasCellNrRSRQ;
    bool  _hasCellNrSNR;
    bool  _hasCellNsaEnabled;
    bool  _hasCellRsrp;
    bool  _hasCellSinr;
    bool  _hasCmDataSentCount;
    bool  _hasCmDataSentDuration;
    bool  _hasCounter;
    bool  _hasEstimatedHighBandwidth;
    bool  _hasEstimatedLowBandwidth;
    bool  _hasEvent;
    bool  _hasIsFR1;
    bool  _hasLqmScorecellular;
    bool  _hasLteMaxScheduledMimoLayersInACell;
    bool  _hasMaxDLCAConfigured;
    bool  _hasMaxOfActualLowBandwidth;
    bool  _hasMlPredictedCellBW;
    bool  _hasMovingAvgHighBandwidth;
    bool  _hasMovingAvgLowBandwidth;
    bool  _hasNrConfiguredBw;
    bool  _hasNrMaxDlModulation;
    bool  _hasNrTotalScheduledMimoLayers;
    bool  _hasNumStall;
    bool  _hasPActualLowBandwidth;
    bool  _hasQbssLoad;
    bool  _hasRrcState;
    bool  _hasStallDuration;
    bool  _hasTcpRTTAvg;
    bool  _hasTcpRTTvar;
    bool  _hasTotalConfiguredBw;
    bool  _hasTotalConfiguredMimoLayers;
    bool  _hasVideoStreamingStallTime;
    bool  _isFR1;
    unsigned int  _lqmScorecellular;
    unsigned int  _lteMaxScheduledMimoLayersInACell;
    unsigned int  _maxDLCAConfigured;
    unsigned int  _maxOfActualLowBandwidth;
    unsigned int  _mlPredictedCellBW;
    unsigned int  _movingAvgHighBandwidth;
    unsigned int  _movingAvgLowBandwidth;
    unsigned int  _nrConfiguredBw;
    unsigned int  _nrMaxDlModulation;
    unsigned int  _nrTotalScheduledMimoLayers;
    unsigned int  _numStall;
    unsigned int  _pActualLowBandwidth;
    unsigned int  _qbssLoad;
    NSString * _ratType;
    unsigned int  _rrcState;
    unsigned int  _stallDuration;
    unsigned int  _tcpRTTAvg;
    unsigned int  _tcpRTTvar;
    unsigned int  _totalConfiguredBw;
    unsigned int  _totalConfiguredMimoLayers;
    unsigned int  _videoStreamingStallTime;
}

@property (nonatomic, readonly) unsigned int actualHighBandwidth;
@property (nonatomic, readonly) unsigned int actualLowBandwidth;
@property (nonatomic, readonly) unsigned int cellARFCN;
@property (nonatomic, readonly) unsigned int cellBandInfo;
@property (nonatomic, readonly) unsigned int cellChannelBW;
@property (nonatomic, readonly) unsigned int cellEstimatedBW;
@property (nonatomic, readonly) unsigned int cellLoad;
@property (nonatomic, readonly) int cellLteRSRQ;
@property (nonatomic, readonly) unsigned int cellModelConfidenceLevel;
@property (nonatomic, readonly) int cellNrRSRP;
@property (nonatomic, readonly) int cellNrRSRQ;
@property (nonatomic, readonly) int cellNrSNR;
@property (nonatomic, readonly) bool cellNsaEnabled;
@property (nonatomic, readonly) int cellRsrp;
@property (nonatomic, readonly) int cellSinr;
@property (nonatomic, readonly) unsigned int cmDataSentCount;
@property (nonatomic, readonly) unsigned int cmDataSentDuration;
@property (nonatomic, readonly) unsigned int counter;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int estimatedHighBandwidth;
@property (nonatomic, readonly) unsigned int estimatedLowBandwidth;
@property (nonatomic, readonly) unsigned int event;
@property (nonatomic, readonly) NSString *geohash;
@property (nonatomic) bool hasActualHighBandwidth;
@property (nonatomic) bool hasActualLowBandwidth;
@property (nonatomic) bool hasCellARFCN;
@property (nonatomic) bool hasCellBandInfo;
@property (nonatomic) bool hasCellChannelBW;
@property (nonatomic) bool hasCellEstimatedBW;
@property (nonatomic) bool hasCellLoad;
@property (nonatomic) bool hasCellLteRSRQ;
@property (nonatomic) bool hasCellModelConfidenceLevel;
@property (nonatomic) bool hasCellNrRSRP;
@property (nonatomic) bool hasCellNrRSRQ;
@property (nonatomic) bool hasCellNrSNR;
@property (nonatomic) bool hasCellNsaEnabled;
@property (nonatomic) bool hasCellRsrp;
@property (nonatomic) bool hasCellSinr;
@property (nonatomic) bool hasCmDataSentCount;
@property (nonatomic) bool hasCmDataSentDuration;
@property (nonatomic) bool hasCounter;
@property (nonatomic) bool hasEstimatedHighBandwidth;
@property (nonatomic) bool hasEstimatedLowBandwidth;
@property (nonatomic) bool hasEvent;
@property (nonatomic) bool hasIsFR1;
@property (nonatomic) bool hasLqmScorecellular;
@property (nonatomic) bool hasLteMaxScheduledMimoLayersInACell;
@property (nonatomic) bool hasMaxDLCAConfigured;
@property (nonatomic) bool hasMaxOfActualLowBandwidth;
@property (nonatomic) bool hasMlPredictedCellBW;
@property (nonatomic) bool hasMovingAvgHighBandwidth;
@property (nonatomic) bool hasMovingAvgLowBandwidth;
@property (nonatomic) bool hasNrConfiguredBw;
@property (nonatomic) bool hasNrMaxDlModulation;
@property (nonatomic) bool hasNrTotalScheduledMimoLayers;
@property (nonatomic) bool hasNumStall;
@property (nonatomic) bool hasPActualLowBandwidth;
@property (nonatomic) bool hasQbssLoad;
@property (nonatomic) bool hasRrcState;
@property (nonatomic) bool hasStallDuration;
@property (nonatomic) bool hasTcpRTTAvg;
@property (nonatomic) bool hasTcpRTTvar;
@property (nonatomic) bool hasTotalConfiguredBw;
@property (nonatomic) bool hasTotalConfiguredMimoLayers;
@property (nonatomic) bool hasVideoStreamingStallTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFR1;
@property (nonatomic, readonly) unsigned int lqmScorecellular;
@property (nonatomic, readonly) unsigned int lteMaxScheduledMimoLayersInACell;
@property (nonatomic, readonly) unsigned int maxDLCAConfigured;
@property (nonatomic, readonly) unsigned int maxOfActualLowBandwidth;
@property (nonatomic, readonly) unsigned int mlPredictedCellBW;
@property (nonatomic, readonly) unsigned int movingAvgHighBandwidth;
@property (nonatomic, readonly) unsigned int movingAvgLowBandwidth;
@property (nonatomic, readonly) unsigned int nrConfiguredBw;
@property (nonatomic, readonly) unsigned int nrMaxDlModulation;
@property (nonatomic, readonly) unsigned int nrTotalScheduledMimoLayers;
@property (nonatomic, readonly) unsigned int numStall;
@property (nonatomic, readonly) unsigned int pActualLowBandwidth;
@property (nonatomic, readonly) unsigned int qbssLoad;
@property (nonatomic, readonly) NSString *ratType;
@property (nonatomic, readonly) unsigned int rrcState;
@property (nonatomic, readonly) unsigned int stallDuration;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int tcpRTTAvg;
@property (nonatomic, readonly) unsigned int tcpRTTvar;
@property (nonatomic, readonly) unsigned int totalConfiguredBw;
@property (nonatomic, readonly) unsigned int totalConfiguredMimoLayers;
@property (nonatomic, readonly) unsigned int videoStreamingStallTime;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)actualHighBandwidth;
- (unsigned int)actualLowBandwidth;
- (unsigned int)cellARFCN;
- (unsigned int)cellBandInfo;
- (unsigned int)cellChannelBW;
- (unsigned int)cellEstimatedBW;
- (unsigned int)cellLoad;
- (int)cellLteRSRQ;
- (unsigned int)cellModelConfidenceLevel;
- (int)cellNrRSRP;
- (int)cellNrRSRQ;
- (int)cellNrSNR;
- (bool)cellNsaEnabled;
- (int)cellRsrp;
- (int)cellSinr;
- (unsigned int)cmDataSentCount;
- (unsigned int)cmDataSentDuration;
- (unsigned int)counter;
- (unsigned int)dataVersion;
- (id)description;
- (unsigned int)estimatedHighBandwidth;
- (unsigned int)estimatedLowBandwidth;
- (unsigned int)event;
- (id)geohash;
- (bool)hasActualHighBandwidth;
- (bool)hasActualLowBandwidth;
- (bool)hasCellARFCN;
- (bool)hasCellBandInfo;
- (bool)hasCellChannelBW;
- (bool)hasCellEstimatedBW;
- (bool)hasCellLoad;
- (bool)hasCellLteRSRQ;
- (bool)hasCellModelConfidenceLevel;
- (bool)hasCellNrRSRP;
- (bool)hasCellNrRSRQ;
- (bool)hasCellNrSNR;
- (bool)hasCellNsaEnabled;
- (bool)hasCellRsrp;
- (bool)hasCellSinr;
- (bool)hasCmDataSentCount;
- (bool)hasCmDataSentDuration;
- (bool)hasCounter;
- (bool)hasEstimatedHighBandwidth;
- (bool)hasEstimatedLowBandwidth;
- (bool)hasEvent;
- (bool)hasIsFR1;
- (bool)hasLqmScorecellular;
- (bool)hasLteMaxScheduledMimoLayersInACell;
- (bool)hasMaxDLCAConfigured;
- (bool)hasMaxOfActualLowBandwidth;
- (bool)hasMlPredictedCellBW;
- (bool)hasMovingAvgHighBandwidth;
- (bool)hasMovingAvgLowBandwidth;
- (bool)hasNrConfiguredBw;
- (bool)hasNrMaxDlModulation;
- (bool)hasNrTotalScheduledMimoLayers;
- (bool)hasNumStall;
- (bool)hasPActualLowBandwidth;
- (bool)hasQbssLoad;
- (bool)hasRrcState;
- (bool)hasStallDuration;
- (bool)hasTcpRTTAvg;
- (bool)hasTcpRTTvar;
- (bool)hasTotalConfiguredBw;
- (bool)hasTotalConfiguredMimoLayers;
- (bool)hasVideoStreamingStallTime;
- (id)initByReadFrom:(id)arg1;
- (id)initWithGeohash:(id)arg1 counter:(id)arg2 event:(id)arg3 ratType:(id)arg4 rrcState:(id)arg5 cellNsaEnabled:(id)arg6 isFR1:(id)arg7 cellARFCN:(id)arg8 cellBandInfo:(id)arg9 cellChannelBW:(id)arg10 cellRsrp:(id)arg11 cellSinr:(id)arg12 cellLteRSRQ:(id)arg13 cellNrRSRP:(id)arg14 cellNrRSRQ:(id)arg15 cellNrSNR:(id)arg16 maxDLCAConfigured:(id)arg17 totalConfiguredBw:(id)arg18 nrConfiguredBw:(id)arg19 nrTotalScheduledMimoLayers:(id)arg20 totalConfiguredMimoLayers:(id)arg21 lteMaxScheduledMimoLayersInACell:(id)arg22 nrMaxDlModulation:(id)arg23 actualHighBandwidth:(id)arg24 actualLowBandwidth:(id)arg25 pActualLowBandwidth:(id)arg26 maxOfActualLowBandwidth:(id)arg27 estimatedHighBandwidth:(id)arg28 estimatedLowBandwidth:(id)arg29 movingAvgHighBandwidth:(id)arg30 movingAvgLowBandwidth:(id)arg31 cmDataSentCount:(id)arg32 cmDataSentDuration:(id)arg33 tcpRTTAvg:(id)arg34 tcpRTTvar:(id)arg35 videoStreamingStallTime:(id)arg36 numStall:(id)arg37 stallDuration:(id)arg38 cellEstimatedBW:(id)arg39 cellLoad:(id)arg40 cellModelConfidenceLevel:(id)arg41 mlPredictedCellBW:(id)arg42 qbssLoad:(id)arg43 lqmScorecellular:(id)arg44;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isFR1;
- (id)jsonDictionary;
- (unsigned int)lqmScorecellular;
- (unsigned int)lteMaxScheduledMimoLayersInACell;
- (unsigned int)maxDLCAConfigured;
- (unsigned int)maxOfActualLowBandwidth;
- (unsigned int)mlPredictedCellBW;
- (unsigned int)movingAvgHighBandwidth;
- (unsigned int)movingAvgLowBandwidth;
- (unsigned int)nrConfiguredBw;
- (unsigned int)nrMaxDlModulation;
- (unsigned int)nrTotalScheduledMimoLayers;
- (unsigned int)numStall;
- (unsigned int)pActualLowBandwidth;
- (unsigned int)qbssLoad;
- (id)ratType;
- (unsigned int)rrcState;
- (id)serialize;
- (void)setHasActualHighBandwidth:(bool)arg1;
- (void)setHasActualLowBandwidth:(bool)arg1;
- (void)setHasCellARFCN:(bool)arg1;
- (void)setHasCellBandInfo:(bool)arg1;
- (void)setHasCellChannelBW:(bool)arg1;
- (void)setHasCellEstimatedBW:(bool)arg1;
- (void)setHasCellLoad:(bool)arg1;
- (void)setHasCellLteRSRQ:(bool)arg1;
- (void)setHasCellModelConfidenceLevel:(bool)arg1;
- (void)setHasCellNrRSRP:(bool)arg1;
- (void)setHasCellNrRSRQ:(bool)arg1;
- (void)setHasCellNrSNR:(bool)arg1;
- (void)setHasCellNsaEnabled:(bool)arg1;
- (void)setHasCellRsrp:(bool)arg1;
- (void)setHasCellSinr:(bool)arg1;
- (void)setHasCmDataSentCount:(bool)arg1;
- (void)setHasCmDataSentDuration:(bool)arg1;
- (void)setHasCounter:(bool)arg1;
- (void)setHasEstimatedHighBandwidth:(bool)arg1;
- (void)setHasEstimatedLowBandwidth:(bool)arg1;
- (void)setHasEvent:(bool)arg1;
- (void)setHasIsFR1:(bool)arg1;
- (void)setHasLqmScorecellular:(bool)arg1;
- (void)setHasLteMaxScheduledMimoLayersInACell:(bool)arg1;
- (void)setHasMaxDLCAConfigured:(bool)arg1;
- (void)setHasMaxOfActualLowBandwidth:(bool)arg1;
- (void)setHasMlPredictedCellBW:(bool)arg1;
- (void)setHasMovingAvgHighBandwidth:(bool)arg1;
- (void)setHasMovingAvgLowBandwidth:(bool)arg1;
- (void)setHasNrConfiguredBw:(bool)arg1;
- (void)setHasNrMaxDlModulation:(bool)arg1;
- (void)setHasNrTotalScheduledMimoLayers:(bool)arg1;
- (void)setHasNumStall:(bool)arg1;
- (void)setHasPActualLowBandwidth:(bool)arg1;
- (void)setHasQbssLoad:(bool)arg1;
- (void)setHasRrcState:(bool)arg1;
- (void)setHasStallDuration:(bool)arg1;
- (void)setHasTcpRTTAvg:(bool)arg1;
- (void)setHasTcpRTTvar:(bool)arg1;
- (void)setHasTotalConfiguredBw:(bool)arg1;
- (void)setHasTotalConfiguredMimoLayers:(bool)arg1;
- (void)setHasVideoStreamingStallTime:(bool)arg1;
- (unsigned int)stallDuration;
- (unsigned int)tcpRTTAvg;
- (unsigned int)tcpRTTvar;
- (unsigned int)totalConfiguredBw;
- (unsigned int)totalConfiguredMimoLayers;
- (unsigned int)videoStreamingStallTime;
- (void)writeTo:(id)arg1;

@end