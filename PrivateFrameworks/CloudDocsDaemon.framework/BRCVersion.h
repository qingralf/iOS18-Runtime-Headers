/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCVersion : NSObject <NSCopying, NSSecureCoding> {
    BRFieldCKInfo * _ckInfo;
    NSSet * _conflictLoserEtags;
    NSData * _contentSignature;
    NSNumber * _editedSinceShared;
    NSString * _lastEditorDeviceName;
    NSNumber * _lastEditorDeviceOrUserRowID;
    NSData * _lazyXattr;
    long long  _mtime;
    NSString * _originalPOSIXName;
    NSData * _quarantineInfo;
    long long  _size;
    NSData * _thumbnailSignature;
    long long  _thumbnailSize;
    NSData * _xattrSignature;
}

@property (nonatomic, retain) BRFieldCKInfo *ckInfo;
@property (nonatomic, retain) NSSet *conflictLoserEtags;
@property (nonatomic, retain) NSData *contentSignature;
@property (nonatomic, retain) NSNumber *editedSinceShared;
@property (nonatomic, readonly) bool hasThumbnail;
@property (nonatomic, readonly) bool isPackage;
@property (nonatomic, retain) NSString *lastEditorDeviceName;
@property (nonatomic, retain) NSNumber *lastEditorDeviceOrUserRowID;
@property (nonatomic, retain) NSNumber *lastEditorDeviceRowID;
@property (nonatomic, retain) BRCUserRowID *lastEditorRowID;
@property (nonatomic) long long mtime;
@property (nonatomic, retain) NSString *originalPOSIXName;
@property (nonatomic, retain) NSData *quarantineInfo;
@property (nonatomic) long long size;
@property (nonatomic, retain) NSData *thumbnailSignature;
@property (nonatomic) long long thumbnailSize;
@property (nonatomic, retain) NSData *xattrSignature;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_hasLastEditorDeviceRowID;
- (bool)_hasLastEditorRowID;
- (id)additionNameForItemID:(id)arg1 zoneID:(id)arg2;
- (bool)check:(id)arg1 logToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg2;
- (id)ckInfo;
- (id)conflictLoserEtags;
- (id)contentSignature;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithContext:(id)arg1;
- (unsigned long long)diffAgainst:(id)arg1;
- (id)displayNameWithoutExtension:(bool)arg1;
- (id)editedSinceShared;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasThumbnail;
- (id)initFromResultSet:(id)arg1 pos:(int)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithVersion:(id)arg1;
- (bool)isEtagEqual:(id)arg1;
- (bool)isPackage;
- (bool)isSmallAndMostRecentClientsGenerateThumbnails;
- (id)lastEditorDeviceDisplayNameWithDB:(id)arg1;
- (id)lastEditorDeviceName;
- (id)lastEditorDeviceOrUserRowID;
- (id)lastEditorDeviceRowID;
- (id)lastEditorDisplayNameWithDB:(id)arg1;
- (id)lastEditorRowID;
- (id)lastEditorUserIdentityWithDB:(id)arg1;
- (id)lazyXattrWithStageRegistry:(id)arg1;
- (long long)mtime;
- (id)originalPOSIXName;
- (id)quarantineInfo;
- (void)setCkInfo:(id)arg1;
- (void)setConflictLoserEtags:(id)arg1;
- (void)setContentSignature:(id)arg1;
- (void)setEditedSinceShared:(id)arg1;
- (void)setLastEditorDeviceName:(id)arg1;
- (void)setLastEditorDeviceOrUserRowID:(id)arg1;
- (void)setLastEditorDeviceRowID:(id)arg1;
- (void)setLastEditorRowID:(id)arg1;
- (void)setMtime:(long long)arg1;
- (void)setOriginalPOSIXName:(id)arg1;
- (void)setQuarantineInfo:(id)arg1;
- (void)setSize:(long long)arg1;
- (void)setThumbnailSignature:(id)arg1;
- (void)setThumbnailSize:(long long)arg1;
- (void)setXattrSignature:(id)arg1;
- (long long)size;
- (id)thumbnailSignature;
- (long long)thumbnailSize;
- (id)uti;
- (id)xattrSignature;

@end
