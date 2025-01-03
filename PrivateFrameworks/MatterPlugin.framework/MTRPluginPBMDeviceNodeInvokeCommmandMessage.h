/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MatterPlugin.framework/MatterPlugin
 */

@interface MTRPluginPBMDeviceNodeInvokeCommmandMessage : PBCodable <NSCopying> {
    MTRPluginPBMVariableValue * _commandFields;
    MTRPluginPBMCommandPath * _commandPath;
    unsigned long long  _expectedValueInterval;
    MTRPluginPBMVariableValueList * _expectedValues;
    struct { 
        unsigned int expectedValueInterval : 1; 
        unsigned int serverSideProcessingTimeout : 1; 
        unsigned int timedInvokeTimeout : 1; 
    }  _has;
    MTRPluginPBMHeader * _header;
    MTRPluginPBMDeviceNode * _node;
    unsigned long long  _serverSideProcessingTimeout;
    unsigned long long  _timedInvokeTimeout;
}

@property (nonatomic, retain) MTRPluginPBMVariableValue *commandFields;
@property (nonatomic, retain) MTRPluginPBMCommandPath *commandPath;
@property (nonatomic) unsigned long long expectedValueInterval;
@property (nonatomic, retain) MTRPluginPBMVariableValueList *expectedValues;
@property (nonatomic, readonly) bool hasCommandFields;
@property (nonatomic, readonly) bool hasCommandPath;
@property (nonatomic) bool hasExpectedValueInterval;
@property (nonatomic, readonly) bool hasExpectedValues;
@property (nonatomic, readonly) bool hasHeader;
@property (nonatomic, readonly) bool hasNode;
@property (nonatomic) bool hasServerSideProcessingTimeout;
@property (nonatomic) bool hasTimedInvokeTimeout;
@property (nonatomic, retain) MTRPluginPBMHeader *header;
@property (nonatomic, retain) MTRPluginPBMDeviceNode *node;
@property (nonatomic) unsigned long long serverSideProcessingTimeout;
@property (nonatomic) unsigned long long timedInvokeTimeout;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)deviceNodeInvokeCommandMessageFromMessage:(id)arg1;
+ (id)deviceNodeInvokeCommandMessageWithNodeID:(id)arg1 invokeCommandWithEndpointID:(id)arg2 clusterID:(id)arg3 commandID:(id)arg4 commandFields:(id)arg5 expectedValues:(id)arg6 expectedValueInterval:(id)arg7 timedInvokeTimeout:(id)arg8 serverSideProcessingTimeout:(id)arg9;

- (void).cxx_destruct;
- (id)commandFields;
- (id)commandPath;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)expectedValueInterval;
- (id)expectedValues;
- (bool)hasCommandFields;
- (bool)hasCommandPath;
- (bool)hasExpectedValueInterval;
- (bool)hasExpectedValues;
- (bool)hasHeader;
- (bool)hasNode;
- (bool)hasServerSideProcessingTimeout;
- (bool)hasTimedInvokeTimeout;
- (unsigned long long)hash;
- (id)header;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (void)mergeFrom:(id)arg1;
- (id)node;
- (bool)readFrom:(id)arg1;
- (unsigned long long)serverSideProcessingTimeout;
- (void)setCommandFields:(id)arg1;
- (void)setCommandPath:(id)arg1;
- (void)setExpectedValueInterval:(unsigned long long)arg1;
- (void)setExpectedValues:(id)arg1;
- (void)setHasExpectedValueInterval:(bool)arg1;
- (void)setHasServerSideProcessingTimeout:(bool)arg1;
- (void)setHasTimedInvokeTimeout:(bool)arg1;
- (void)setHeader:(id)arg1;
- (void)setNode:(id)arg1;
- (void)setServerSideProcessingTimeout:(unsigned long long)arg1;
- (void)setTimedInvokeTimeout:(unsigned long long)arg1;
- (unsigned long long)timedInvokeTimeout;
- (void)writeTo:(id)arg1;

@end
