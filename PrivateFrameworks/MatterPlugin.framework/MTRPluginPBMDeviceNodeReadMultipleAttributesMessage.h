/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MatterPlugin.framework/MatterPlugin
 */

@interface MTRPluginPBMDeviceNodeReadMultipleAttributesMessage : PBCodable <NSCopying> {
    NSMutableArray * _attributePaths;
    MTRPluginPBMHeader * _header;
    MTRPluginPBMDeviceNode * _node;
}

@property (nonatomic, retain) NSMutableArray *attributePaths;
@property (nonatomic, readonly) NSArray *attributeRequestPaths;
@property (nonatomic, readonly) bool hasHeader;
@property (nonatomic, readonly) bool hasNode;
@property (nonatomic, retain) MTRPluginPBMHeader *header;
@property (nonatomic, retain) MTRPluginPBMDeviceNode *node;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)_convertArray:(id)arg1;
+ (Class)attributePathsType;
+ (id)deviceNodeReadMultipleAttributesMessageFromMessage:(id)arg1;
+ (id)deviceNodeReadMultipleAttributesMessageWithNodeID:(id)arg1 readAttributePaths:(id)arg2;

- (void).cxx_destruct;
- (void)addAttributePaths:(id)arg1;
- (id)attributePaths;
- (id)attributePathsAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributePathsCount;
- (id)attributeRequestPaths;
- (void)clearAttributePaths;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHeader;
- (bool)hasNode;
- (unsigned long long)hash;
- (id)header;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (void)mergeFrom:(id)arg1;
- (id)node;
- (bool)readFrom:(id)arg1;
- (void)setAttributePaths:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setNode:(id)arg1;
- (void)writeTo:(id)arg1;

@end