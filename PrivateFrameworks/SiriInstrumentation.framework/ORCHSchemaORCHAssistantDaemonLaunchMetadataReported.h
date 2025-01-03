/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ORCHSchemaORCHAssistantDaemonLaunchMetadataReported : SISchemaInstrumentationMessage {
    long long  _assistantDaemonLoadedTimestampInNs;
    long long  _assistantDaemonSpawnTimestampInNs;
    struct { 
        unsigned int assistantDaemonSpawnTimestampInNs : 1; 
        unsigned int assistantDaemonLoadedTimestampInNs : 1; 
        unsigned int isFirstRequest : 1; 
    }  _has;
    bool  _isFirstRequest;
}

@property (nonatomic) long long assistantDaemonLoadedTimestampInNs;
@property (nonatomic) long long assistantDaemonSpawnTimestampInNs;
@property (nonatomic) bool hasAssistantDaemonLoadedTimestampInNs;
@property (nonatomic) bool hasAssistantDaemonSpawnTimestampInNs;
@property (nonatomic) bool hasIsFirstRequest;
@property (nonatomic) bool isFirstRequest;
@property (nonatomic, readonly) NSData *jsonData;

- (long long)assistantDaemonLoadedTimestampInNs;
- (long long)assistantDaemonSpawnTimestampInNs;
- (void)deleteAssistantDaemonLoadedTimestampInNs;
- (void)deleteAssistantDaemonSpawnTimestampInNs;
- (void)deleteIsFirstRequest;
- (id)dictionaryRepresentation;
- (bool)hasAssistantDaemonLoadedTimestampInNs;
- (bool)hasAssistantDaemonSpawnTimestampInNs;
- (bool)hasIsFirstRequest;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFirstRequest;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAssistantDaemonLoadedTimestampInNs:(long long)arg1;
- (void)setAssistantDaemonSpawnTimestampInNs:(long long)arg1;
- (void)setHasAssistantDaemonLoadedTimestampInNs:(bool)arg1;
- (void)setHasAssistantDaemonSpawnTimestampInNs:(bool)arg1;
- (void)setHasIsFirstRequest:(bool)arg1;
- (void)setIsFirstRequest:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
