/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface HomeKitSchemaHKAudioTopologyReported : SISchemaInstrumentationMessage {
    int  _audioTopology;
    struct { 
        unsigned int audioTopology : 1; 
        unsigned int isLeader : 1; 
    }  _has;
    bool  _isLeader;
}

@property (nonatomic) int audioTopology;
@property (nonatomic) bool hasAudioTopology;
@property (nonatomic) bool hasIsLeader;
@property (nonatomic) bool isLeader;
@property (nonatomic, readonly) NSData *jsonData;

- (int)audioTopology;
- (void)deleteAudioTopology;
- (void)deleteIsLeader;
- (id)dictionaryRepresentation;
- (bool)hasAudioTopology;
- (bool)hasIsLeader;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLeader;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAudioTopology:(int)arg1;
- (void)setHasAudioTopology:(bool)arg1;
- (void)setHasIsLeader:(bool)arg1;
- (void)setIsLeader:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end