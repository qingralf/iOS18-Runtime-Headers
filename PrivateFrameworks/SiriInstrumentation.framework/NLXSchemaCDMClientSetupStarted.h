/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface NLXSchemaCDMClientSetupStarted : SISchemaInstrumentationMessage {
    bool  _exists;
    struct { 
        unsigned int exists : 1; 
        unsigned int serviceGraphName : 1; 
        unsigned int performWarmupOperations : 1; 
        unsigned int memoryPressure : 1; 
    }  _has;
    int  _memoryPressure;
    bool  _performWarmupOperations;
    int  _serviceGraphName;
}

@property (nonatomic) bool exists;
@property (nonatomic) bool hasExists;
@property (nonatomic) bool hasMemoryPressure;
@property (nonatomic) bool hasPerformWarmupOperations;
@property (nonatomic) bool hasServiceGraphName;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int memoryPressure;
@property (nonatomic) bool performWarmupOperations;
@property (nonatomic) int serviceGraphName;

- (void)deleteExists;
- (void)deleteMemoryPressure;
- (void)deletePerformWarmupOperations;
- (void)deleteServiceGraphName;
- (id)dictionaryRepresentation;
- (bool)exists;
- (bool)hasExists;
- (bool)hasMemoryPressure;
- (bool)hasPerformWarmupOperations;
- (bool)hasServiceGraphName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)memoryPressure;
- (bool)performWarmupOperations;
- (bool)readFrom:(id)arg1;
- (int)serviceGraphName;
- (void)setExists:(bool)arg1;
- (void)setHasExists:(bool)arg1;
- (void)setHasMemoryPressure:(bool)arg1;
- (void)setHasPerformWarmupOperations:(bool)arg1;
- (void)setHasServiceGraphName:(bool)arg1;
- (void)setMemoryPressure:(int)arg1;
- (void)setPerformWarmupOperations:(bool)arg1;
- (void)setServiceGraphName:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end