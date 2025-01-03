/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface FLOWSchemaFLOWPhotosContext : SISchemaInstrumentationMessage {
    int  _entityType;
    int  _faceType;
    struct { 
        unsigned int taskType : 1; 
        unsigned int entityType : 1; 
        unsigned int faceType : 1; 
    }  _has;
    int  _taskType;
}

@property (nonatomic) int entityType;
@property (nonatomic) int faceType;
@property (nonatomic) bool hasEntityType;
@property (nonatomic) bool hasFaceType;
@property (nonatomic) bool hasTaskType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int taskType;

- (void)deleteEntityType;
- (void)deleteFaceType;
- (void)deleteTaskType;
- (id)dictionaryRepresentation;
- (int)entityType;
- (int)faceType;
- (bool)hasEntityType;
- (bool)hasFaceType;
- (bool)hasTaskType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEntityType:(int)arg1;
- (void)setFaceType:(int)arg1;
- (void)setHasEntityType:(bool)arg1;
- (void)setHasFaceType:(bool)arg1;
- (void)setHasTaskType:(bool)arg1;
- (void)setTaskType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)taskType;
- (void)writeTo:(id)arg1;

@end
