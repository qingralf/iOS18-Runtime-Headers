/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCNWConnectionCongestionDetector : NSObject {
    unsigned int  _averagePacketDelayMs;
    unsigned int  _averageThroughputBps;
    bool  _didSendCongestionEvent;
    unsigned int  _lastTimestampWithPacketDrop;
    void * _logNWDump;
    unsigned int  _maxAveragePacketDelayMs;
    unsigned int  _packetDropCount;
    unsigned int  _packetDropCountPerFrame;
    struct tagVCStatisticsMessage { 
        int type; 
        int priority; 
        double arrivalTime; 
        bool isVCRCInternal; 
        bool shouldFlushAndProcess; 
        bool shouldDrainAndProcess; 
        bool statisticsUpdateOnly; 
        union { 
            struct { 
                unsigned int queueDepth1; 
                unsigned int queueDepth2; 
                unsigned int txBitrate; 
                unsigned int averageBitrate; 
                unsigned int averageBitrateShort; 
                unsigned int averageBitrateLong; 
                unsigned int transmittedBytes; 
                double averageQueueDepth; 
                double expectedQueuingDelay; 
                double bdcd; 
                double normalizedBDCD; 
                double normalizedDelay; 
                BOOL bbString[64]; 
                int radioTechnology; 
            } baseband; 
            struct { 
                unsigned int sendTimestamp; 
                unsigned int queuingDelay; 
                unsigned int remoteBWEstimation; 
                unsigned int remoteBWEStability; 
                unsigned int maxVideoBurstyLoss; 
                unsigned int audioConsecutiveLoss; 
                unsigned int mostBurstyLoss; 
                unsigned int audioReceivedPackets; 
                unsigned int videoReceivedPackets; 
                unsigned int totalReceivedKBytes; 
                unsigned int totalSentPackets; 
                unsigned int echoedSendTimestamp; 
                unsigned int mediaTimestamp; 
                double owrd; 
                double packetLossRate; 
                unsigned int actualBitrate; 
                unsigned int instantBitrate; 
                double roundTripTime; 
                unsigned int receiveQueueTarget; 
                bool isPacketReceivedValid; 
                struct { 
                    int packetType; 
                    unsigned int packetId; 
                    unsigned int sampleRate; 
                    unsigned int totalPacketsReceived; 
                    unsigned int totalReceivedKBytes; 
                    double receiveTimestamp; 
                    double owrd; 
                    double targetJitterQueueSize; 
                    unsigned int bandwidthEstimation; 
                    unsigned int localBurstyLoss; 
                } packetReceived; 
                struct { 
                    unsigned short sequenceNumber; 
                    bool isDuplicatePacket; 
                    bool isReceivedOnPrimary; 
                    unsigned int connectionStatsBuffer; 
                } connectionStats; 
                struct tagVCStatisticsECNStats { 
                    unsigned short ecnECT1Count; 
                    unsigned short ecnCECount; 
                } ecnStats; 
                struct tagVCStatisticsECNStats { 
                    unsigned short ecnECT1Count; 
                    unsigned short ecnCECount; 
                } ecnRecvd; 
                bool isECNEnabled; 
                bool isOverRelay; 
            } feedback; 
            struct { 
                double packetLossPercentage; 
                double packetLossPercentageAudio; 
                double packetLossPercentageVideo; 
                unsigned int burstPacketLoss; 
                unsigned int roundTripTimeMilliseconds; 
                unsigned int isNetworkCongested; 
                unsigned int owrd; 
                unsigned int targetBitrate; 
                unsigned long long statisticsID; 
                unsigned int videoPacketsReceived; 
            } network; 
            struct { 
                unsigned int estimatorID; 
                bool deregisterEstimator; 
                bool isProbingSequence; 
                bool isEndOfProbingSequence; 
                unsigned int probingSequenceID; 
                unsigned int messageLength; 
                double arrivalTime; 
                unsigned int mediaTimestamp; 
                bool isPacketReceivedValid; 
                struct { 
                    int packetType; 
                    unsigned int packetId; 
                    unsigned int sampleRate; 
                    unsigned int totalPacketsReceived; 
                    unsigned int totalReceivedKBytes; 
                    double receiveTimestamp; 
                    double owrd; 
                    double targetJitterQueueSize; 
                    unsigned int bandwidthEstimation; 
                    unsigned int localBurstyLoss; 
                } packetReceived; 
            } probing; 
            struct { 
                unsigned char linkID; 
                unsigned int sendTimestamp; 
                unsigned int receiveTimestamp; 
                unsigned int totalPacketSent; 
                unsigned int totalPacketReceived; 
                unsigned int totalByteSent; 
                unsigned int totalByteReceived; 
                unsigned int serverStatsByteUsed; 
                unsigned int bandwidthSample; 
                unsigned int bandwidthEstimation; 
                double roundTripTime; 
                double owrd; 
                double packetLossRate; 
                double packetLossRateShortWindow; 
                unsigned int actualBitrate; 
                unsigned int instantBitrate; 
                unsigned int serverStatsBitrate; 
                unsigned int expectedBitrate; 
            } serverStats; 
            struct { 
                unsigned int packetId; 
                unsigned int totalPacketsSent; 
                unsigned int totalBytesSent; 
                double sendTimestamp; 
            } packetSent; 
            struct { 
                int packetType; 
                unsigned int packetId; 
                unsigned int sampleRate; 
                unsigned int totalPacketsReceived; 
                unsigned int totalReceivedKBytes; 
                double receiveTimestamp; 
                double owrd; 
                double targetJitterQueueSize; 
                unsigned int bandwidthEstimation; 
                unsigned int localBurstyLoss; 
            } packetReceived; 
            struct { 
                unsigned int ssrc; 
                unsigned int packetLossPercentage; 
                unsigned int lastSequenceNumber; 
                unsigned int roundTripTimeMilliseconds; 
            } rtcpRR; 
            struct { 
                unsigned int mode; 
                unsigned int remoteRadioAccessTechnology; 
                unsigned int localRadioAccessTechnology; 
                unsigned int maxBitrate; 
                unsigned int minBitrate; 
                unsigned int initialBitrate; 
                bool isTrafficBursty; 
                unsigned int featureFlags; 
            } config; 
            struct { 
                unsigned int mediaEventType; 
                unsigned int additionalFlushCount; 
                unsigned int transactionID; 
                unsigned int audioStallBitrate; 
                float audioErasure; 
                bool isKeyFrame; 
                bool isTransitionToFEC; 
                double videoStallTimeDelta; 
                double videoStallTimeTotal; 
                unsigned int refreshFrameTimestamp; 
                unsigned int refreshFramePayloadType; 
                unsigned int refreshFramePacketCount; 
                unsigned long long idsParticipantID; 
            } mediaEvent; 
            struct { 
                unsigned char version; 
                unsigned char direction; 
                unsigned char interfaceType; 
                unsigned char notificationType; 
                unsigned long long timestamp; 
                unsigned long long maxThroughputBps; 
                unsigned long long totalByteCount; 
                unsigned int flushableQueueSize; 
                unsigned int nonFlushableQueueSize; 
                unsigned int averageDelayMillisecond; 
                unsigned long long averageThroughputBps; 
                int rateTrendSuggestion; 
                unsigned int packetLossPerFrame; 
                unsigned short sequenceNumber; 
                union { 
                    struct { 
                        unsigned char frequencyBand; 
                        unsigned char intermittentState; 
                        unsigned short estimatedIntermittentPeriod; 
                        unsigned short singleOutagePeriod; 
                        unsigned char btCoex; 
                        unsigned char radioCoex; 
                        unsigned char qualityScoreDelayRx; 
                        unsigned char qualityScoreDelayTx; 
                        unsigned char qualityScoreLossRx; 
                        unsigned char qualityScoreLossTx; 
                        unsigned char qualityScoreChannel; 
                        float offChannelTimeRatio; 
                        bool detectedFrequentOffChannelActivity; 
                        unsigned short wlanDutyCycle; 
                        unsigned int wifiObservedTxBitrate[6]; 
                        unsigned char maxRadioCoex; 
                        long long accumulatedOffChannelTime; 
                        unsigned short maxSingleOutagePeriod; 
                        float qualityScoreDelayRxAverage; 
                        float qualityScoreDelayTxAverage; 
                        float qualityScoreLossRxAverage; 
                        float qualityScoreLossTxAverage; 
                        float qualityScoreChannelAverage; 
                    } wifi; 
                    struct { 
                        unsigned char radioAccessTechnology; 
                        short referenceSignalLevel; 
                        short signalLevel; 
                        BOOL signalQuality; 
                        unsigned char uplinkBLER; 
                        unsigned char downlinkBLER; 
                        unsigned char bandwidthLimitationIndication; 
                        unsigned char cdrxState; 
                        unsigned short cdrxCycle; 
                        unsigned short estimatedOutagePeriod; 
                        unsigned char outageState; 
                    } baseband; 
                } ; 
            } nwConnection; 
            struct tagVCStatisticsVideoLossFeedback { 
                unsigned int frameRTPTimestamp; 
                unsigned short packetsReceived; 
                unsigned char frameSize; 
                unsigned char packetsLost; 
            } videoLossFeedback; 
            struct tagVCStatisticsLocalRCEvent { 
                double recentSendTime; 
                double recentFeedbackTime; 
                unsigned int bytesInFlight; 
            } localRCEvent; 
        } ; 
    }  _previousStatistics;
    AVCStatisticsCollector * _statisticsCollector;
}

@property (readonly) unsigned int averagePacketDelayMs;
@property (readonly) unsigned int averageThroughputBps;
@property unsigned int maxAveragePacketDelayMs;
@property (readonly) unsigned int packetDropCount;
@property (nonatomic, retain) AVCStatisticsCollector *statisticsCollector;

- (unsigned int)averagePacketDelayMs;
- (unsigned int)averageThroughputBps;
- (void)dealloc;
- (void)enableNWLogDump:(void*)arg1;
- (unsigned int)maxAveragePacketDelayMs;
- (unsigned int)packetDropCount;
- (bool)processNWConnectionNotification:(struct tagVCNWConnectionNotification { unsigned char x1; unsigned char x2; unsigned char x3; union { int x_4_1_1; int x_4_1_2; } x4; union { struct ifnet_interface_advisory { union { struct { unsigned char x_1_4_1; unsigned char x_1_4_2; unsigned short x_1_4_3; int x_1_4_4; unsigned long long x_1_4_5; unsigned long long x_1_4_6; unsigned long long x_1_4_7; unsigned long long x_1_4_8; unsigned int x_1_4_9; unsigned int x_1_4_10; unsigned int x_1_4_11; unsigned char x_1_4_12; unsigned char x_1_4_13; unsigned short x_1_4_14; unsigned short x_1_4_15; unsigned char x_1_4_16; unsigned char x_1_4_17; unsigned char x_1_4_18; unsigned char x_1_4_19; } x_1_3_1; struct { struct ifnet_interface_advisory_header { unsigned char x_1_5_1; unsigned char x_1_5_2; unsigned char x_1_5_3; union { unsigned char x_4_6_1; unsigned char x_4_6_2; } x_1_5_4; } x_2_4_1; struct ifnet_interface_advisory_capacity { int x_2_5_1; unsigned long long x_2_5_2; unsigned long long x_2_5_3; unsigned long long x_2_5_4; unsigned long long x_2_5_5; unsigned int x_2_5_6; unsigned int x_2_5_7; unsigned int x_2_5_8; } x_2_4_2; union { struct ifnet_interface_advisory_wifi_context { unsigned char x_1_6_1; unsigned char x_1_6_2; unsigned short x_1_6_3; unsigned short x_1_6_4; unsigned char x_1_6_5; unsigned char x_1_6_6; unsigned char x_1_6_7; unsigned char x_1_6_8; unsigned char x_1_6_9; unsigned short x_1_6_10; unsigned int x_1_6_11[6]; } x_3_5_1; struct ifnet_interface_advisory_cell_context { unsigned char x_2_6_1; short x_2_6_2; short x_2_6_3; BOOL x_2_6_4; unsigned char x_2_6_5; unsigned char x_2_6_6; unsigned char x_2_6_7; unsigned char x_2_6_8; unsigned short x_2_6_9; unsigned short x_2_6_10; unsigned char x_2_6_11; unsigned char x_2_6_12; } x_3_5_2; } x_2_4_3; } x_1_3_2; } x_1_2_1; } x_5_1_1; } x5; }*)arg1;
- (bool)processNWConnectionPacketEvent:(struct packet_id { unsigned char x1; unsigned char x2; unsigned short x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1 eventType:(int)arg2;
- (void)sendCongestionEventWithTimestamp:(unsigned int)arg1;
- (void)setMaxAveragePacketDelayMs:(unsigned int)arg1;
- (void)setStatisticsCollector:(id)arg1;
- (id)statisticsCollector;

@end
