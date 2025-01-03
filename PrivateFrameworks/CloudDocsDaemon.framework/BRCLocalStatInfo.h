/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCLocalStatInfo : BRCStatInfo {
    NSString * _bouncedLogicalName;
    NSNumber * _documentID;
    NSNumber * _fileID;
    BRCGenerationID * _generationID;
    unsigned char  _itemScope;
    NSString * _physicalName;
    NSNumber * _processingStamp;
    NSNumber * _stagedFileID;
    unsigned int  _stagedGenerationID;
    NSNumber * _tmpBouncedNo;
}

@property (nonatomic, readonly) NSNumber *documentID;
@property (nonatomic, readonly) NSNumber *fileID;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) BRCGenerationID *generationID;
@property (nonatomic) unsigned char itemScope;
@property (nonatomic, readonly) NSString *logicalNameWithoutLocalBounce;
@property (nonatomic, readonly) NSNumber *lostStamp;
@property (nonatomic, readonly) NSString *physicalName;
@property (nonatomic, readonly) NSNumber *processingStamp;
@property (nonatomic, retain) NSString *rawBouncedLogicalName;
@property (nonatomic, readonly) NSNumber *stagedFileID;
@property (nonatomic, readonly) NSNumber *stagedFileIDForDB;
@property (nonatomic, readonly) unsigned int stagedGenerationID;
@property (nonatomic, readonly) NSNumber *tmpBouncedNo;

+ (id)_finderTagsFromRelativePath:(id)arg1;
+ (BOOL)_modeFromRelativePath:(id)arg1 isPackageFault:(bool)arg2;

- (void).cxx_destruct;
- (void)_bouncePhysicalNameToRepresentableName;
- (void)_clearFileID;
- (void)_clearGenerationID;
- (void)_clearTmpBouncedNumber;
- (void)_generatedBouncedLogicalFilenameWithBounceNumber:(unsigned long long)arg1;
- (void)_markAlmostDead;
- (void)_markClearedFromStage;
- (void)_markDead;
- (void)_markDeadAsSharedTopLevelItemWithDocumentsItemID:(id)arg1;
- (void)_markFound;
- (void)_markLiveFromStageAsFault:(bool)arg1;
- (void)_markLiveFromStageAsType:(BOOL)arg1;
- (void)_markLostAddingBackoffWithMode:(unsigned char)arg1 appLibrary:(id)arg2;
- (void)_markReserved;
- (void)_markStagedWithFileID:(id)arg1 generationID:(unsigned int)arg2 documentID:(id)arg3;
- (void)_migrateTmpBouncedNameToLocalName;
- (void)_moveItemAsideWithUUIDString;
- (void)_setCKInfo:(id)arg1;
- (void)_setItemScope:(unsigned char)arg1;
- (void)_setParentID:(id)arg1;
- (void)_updateMetadataFromFSAtPath:(id)arg1 itemID:(id)arg2 parentGlobalID:(id)arg3 isPackageFault:(bool)arg4 readonlyShareChild:(bool)arg5;
- (void)_updateStatMeta:(id)arg1;
- (bool)checkStateWithItemID:(id)arg1 logToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithContext:(id)arg1 origName:(id)arg2;
- (unsigned long long)diffAgainstLocalInfo:(id)arg1;
- (id)documentID;
- (id)fileID;
- (id)filename;
- (id)generationID;
- (id)initAsShareAcceptFaultWithName:(id)arg1 mode:(BOOL)arg2 isDirectory:(bool)arg3;
- (id)initFromResultSet:(id)arg1 pos:(int)arg2;
- (id)initWithLocalStatInfo:(id)arg1;
- (id)initWithRelativePath:(id)arg1 itemID:(id)arg2 parentGlobalID:(id)arg3;
- (unsigned char)itemScope;
- (id)logicalName;
- (id)logicalNameWithoutLocalBounce;
- (id)lostStamp;
- (id)physicalName;
- (id)processingStamp;
- (id)rawBouncedLogicalName;
- (void)setFilename:(id)arg1;
- (void)setFilename:(id)arg1 forcePhysicalName:(id)arg2 forceBouncedLogicalName:(id)arg3 serverName:(id)arg4;
- (void)setItemScope:(unsigned char)arg1;
- (void)setRawBouncedLogicalName:(id)arg1;
- (id)stagedFileID;
- (id)stagedFileIDForDB;
- (unsigned int)stagedGenerationID;
- (id)tmpBouncedNo;
- (void)updateFilenameFromPath:(id)arg1;
- (void)updateFromFSAtPath:(id)arg1 itemID:(id)arg2 parentGlobalID:(id)arg3 isPackageFault:(bool)arg4 readonlyShareChild:(bool)arg5;
- (void)updateLocationAndMetaFromFSAtPath:(id)arg1 itemID:(id)arg2 parentGlobalID:(id)arg3 isPackageFault:(bool)arg4 readonlyShareChild:(bool)arg5;

@end
