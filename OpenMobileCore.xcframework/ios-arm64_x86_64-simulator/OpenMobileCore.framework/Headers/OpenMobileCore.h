#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class OMCErrorHandler, OMCKError, OMCKotlinThrowable, OMCKotlinEnumCompanion, OMCKotlinEnum<E>, OMCErrorType, OMCKotlinArray<T>, OMCRequest, OMCRequestResult<T>, OMCStatus, OMCKtor_httpHttpMethod, OMCManagerType, OMCManagerTypeCompanion, OMCOpenMobileCore, OMCOpenMobileActions, OMCNetworkActions, OMCNotificationsActions, OMCOpenMobileActionsCompanion, OMCOpenMobileActionsNETWORK_GET, OMCOpenMobileActionsNETWORK_POST, OMCOpenMobileActionsNOTIFICATION_DEREGISTER_DEVICE_PUSH_TOKEN, OMCOpenMobileActionsNOTIFICATION_HANDLE_PUSH_MESSAGE, OMCOpenMobileActionsNOTIFICATION_REGISTER_DEVICE_PUSH_TOKEN, OMCOpenMobileActionsNOTIFICATION_SHOW_NOTIFICATION, OMCOpenMobileActionsUI_BUILD_INTENT, OMCOpenMobileActionsUI_DISMISS_INTENT, OMCOpenMobileActionsUI_LAUNCH_INTENT, OMCOpenMobileActionsUI_OPEN_URL, OMCOpenMobileActionsUI_SHOW_TOAST, OMCUIActions, OMCKotlinException, OMCKotlinRuntimeException, OMCKotlinIllegalStateException, OMCKtor_httpHttpMethodCompanion;

@protocol OMCKotlinComparable, OMCActionType, OMCActionManager, OMCCancelable, OMCRepositoryI, OMCKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface OMCBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface OMCBase (OMCBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface OMCMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface OMCMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorOMCKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface OMCNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface OMCByte : OMCNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface OMCUByte : OMCNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface OMCShort : OMCNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface OMCUShort : OMCNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface OMCInt : OMCNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface OMCUInt : OMCNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface OMCLong : OMCNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface OMCULong : OMCNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface OMCFloat : OMCNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface OMCDouble : OMCNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface OMCBoolean : OMCNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("Cancelable")))
@protocol OMCCancelable
@required
- (void)cancel __attribute__((swift_name("cancel()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorHandler")))
@interface OMCErrorHandler : OMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)errorHandler __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OMCErrorHandler *shared __attribute__((swift_name("shared")));
- (OMCKError *)getErrorT:(OMCKotlinThrowable *)t __attribute__((swift_name("getError(t:)")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol OMCKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface OMCKotlinEnum<E> : OMCBase <OMCKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) OMCKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorType")))
@interface OMCErrorType : OMCKotlinEnum<OMCErrorType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) OMCErrorType *unauthorized __attribute__((swift_name("unauthorized")));
@property (class, readonly) OMCErrorType *canceled __attribute__((swift_name("canceled")));
@property (class, readonly) OMCErrorType *other __attribute__((swift_name("other")));
+ (OMCKotlinArray<OMCErrorType *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("ActionManager")))
@protocol OMCActionManager
@required
- (id _Nullable)runActionAction:(id<OMCActionType>)action parameters:(NSDictionary<id, id> * _Nullable)parameters __attribute__((swift_name("runAction(action:parameters:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)runFutureActionAction:(id<OMCActionType>)action parameters:(NSDictionary<id, id> * _Nullable)parameters completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("runFutureAction(action:parameters:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkManager")))
@interface OMCNetworkManager : OMCBase <OMCActionManager>
- (instancetype)initWithBaseUrl:(NSString *)baseUrl pkLive:(NSString *)pkLive headers:(NSDictionary<id, id> * _Nullable)headers __attribute__((swift_name("init(baseUrl:pkLive:headers:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)runFutureActionAction:(id<OMCActionType>)action parameters:(NSDictionary<id, id> * _Nullable)parameters completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("runFutureAction(action:parameters:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkRequest")))
@interface OMCNetworkRequest : OMCBase
- (instancetype)initWithBaseUrl:(NSString *)baseUrl pkLive:(NSString *)pkLive headers:(NSDictionary<id, id> * _Nullable)headers __attribute__((swift_name("init(baseUrl:pkLive:headers:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)makeGetParameters:(NSDictionary<id, id> * _Nullable)parameters completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("makeGet(parameters:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)makePostParameters:(NSDictionary<id, id> * _Nullable)parameters completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("makePost(parameters:completionHandler:)")));
@end

__attribute__((swift_name("RepositoryI")))
@protocol OMCRepositoryI <OMCCancelable>
@required

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)makeRequestRequest:(OMCRequest *)request completionHandler:(void (^)(OMCRequestResult<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("makeRequest(request:completionHandler:)")));
- (id<OMCCancelable>)makeRequestRequest:(OMCRequest *)request action:(void (^)(OMCRequestResult<NSString *> *))action __attribute__((swift_name("makeRequest(request:action:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Repository")))
@interface OMCRepository : OMCBase <OMCRepositoryI>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)cancel __attribute__((swift_name("cancel()")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)makeRequestRequest:(OMCRequest *)request completionHandler:(void (^)(OMCRequestResult<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("makeRequest(request:completionHandler:)")));
- (id<OMCCancelable>)makeRequestRequest:(OMCRequest *)request action:(void (^)(OMCRequestResult<NSString *> *))action __attribute__((swift_name("makeRequest(request:action:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Status")))
@interface OMCStatus : OMCKotlinEnum<OMCStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) OMCStatus *success __attribute__((swift_name("success")));
@property (class, readonly) OMCStatus *fail __attribute__((swift_name("fail")));
+ (OMCKotlinArray<OMCStatus *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KError")))
@interface OMCKError : OMCBase
- (instancetype)initWithType:(OMCErrorType *)type message:(NSString * _Nullable)message __attribute__((swift_name("init(type:message:)"))) __attribute__((objc_designated_initializer));
- (OMCErrorType *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (OMCKError *)doCopyType:(OMCErrorType *)type message:(NSString * _Nullable)message __attribute__((swift_name("doCopy(type:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) OMCErrorType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Request")))
@interface OMCRequest : OMCBase
- (instancetype)initWithPath:(NSString *)path method:(OMCKtor_httpHttpMethod *)method headers:(NSDictionary<id, id> * _Nullable)headers queryParameters:(NSDictionary<id, id> * _Nullable)queryParameters body:(NSString * _Nullable)body __attribute__((swift_name("init(path:method:headers:queryParameters:body:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (OMCKtor_httpHttpMethod *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<id, id> * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<id, id> * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (OMCRequest *)doCopyPath:(NSString *)path method:(OMCKtor_httpHttpMethod *)method headers:(NSDictionary<id, id> * _Nullable)headers queryParameters:(NSDictionary<id, id> * _Nullable)queryParameters body:(NSString * _Nullable)body __attribute__((swift_name("doCopy(path:method:headers:queryParameters:body:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable body __attribute__((swift_name("body")));
@property (readonly) NSDictionary<id, id> * _Nullable headers __attribute__((swift_name("headers")));
@property (readonly) OMCKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@property (readonly) NSDictionary<id, id> * _Nullable queryParameters __attribute__((swift_name("queryParameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestResult")))
@interface OMCRequestResult<T> : OMCBase
- (instancetype)initWithStatus:(OMCStatus *)status value:(T _Nullable)value error:(OMCKError * _Nullable)error __attribute__((swift_name("init(status:value:error:)"))) __attribute__((objc_designated_initializer));
@property (readonly) OMCKError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) OMCStatus *status __attribute__((swift_name("status")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("ActionType")))
@protocol OMCActionType
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client")))
@interface OMCClient : OMCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clearSettings __attribute__((swift_name("clearSettings()")));
- (NSString * _Nullable)getSettingsValueKey:(NSString *)key __attribute__((swift_name("getSettingsValue(key:)")));
- (void)registerActionManagerName:(OMCManagerType *)name actionManager:(id<OMCActionManager>)actionManager __attribute__((swift_name("registerActionManager(name:actionManager:)")));
- (id _Nullable)runActionActionManager:(OMCManagerType *)actionManager action:(id<OMCActionType>)action parameters:(NSDictionary<id, id> * _Nullable)parameters __attribute__((swift_name("runAction(actionManager:action:parameters:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)runFutureActionActionManager:(OMCManagerType *)actionManager action:(id<OMCActionType>)action parameters:(NSDictionary<id, id> * _Nullable)parameters completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("runFutureAction(actionManager:action:parameters:completionHandler:)")));
- (void)setSettingsValueKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("setSettingsValue(key:value:)")));
@property OMCMutableDictionary<OMCManagerType *, id<OMCActionManager>> *actionManagerMap __attribute__((swift_name("actionManagerMap")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ManagerType")))
@interface OMCManagerType : OMCKotlinEnum<OMCManagerType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) OMCManagerTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) OMCManagerType *ui __attribute__((swift_name("ui")));
@property (class, readonly) OMCManagerType *notification __attribute__((swift_name("notification")));
@property (class, readonly) OMCManagerType *network __attribute__((swift_name("network")));
+ (OMCKotlinArray<OMCManagerType *> *)values __attribute__((swift_name("values()")));
- (id<OMCActionType> _Nullable)getActionName:(NSString *)name __attribute__((swift_name("getAction(name:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ManagerType.Companion")))
@interface OMCManagerTypeCompanion : OMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OMCManagerTypeCompanion *shared __attribute__((swift_name("shared")));
- (OMCManagerType * _Nullable)getByNameName:(NSString *)name __attribute__((swift_name("getByName(name:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenMobileCore")))
@interface OMCOpenMobileCore : OMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)openMobileCore __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OMCOpenMobileCore *shared __attribute__((swift_name("shared")));
- (void)clearSettings __attribute__((swift_name("clearSettings()")));
- (NSString * _Nullable)getSettingsValueKey:(NSString *)key __attribute__((swift_name("getSettingsValue(key:)")));
- (void)initialize __attribute__((swift_name("initialize()")));
- (void)registerActionManagerName:(OMCManagerType *)name actionManager:(id<OMCActionManager>)actionManager __attribute__((swift_name("registerActionManager(name:actionManager:)")));
- (id _Nullable)runActionActionLink:(OMCOpenMobileActions *)actionLink __attribute__((swift_name("runAction(actionLink:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)runFutureActionActionLink:(OMCOpenMobileActions *)actionLink completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("runFutureAction(actionLink:completionHandler:)")));
- (void)setSettingsValueKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("setSettingsValue(key:value:)")));
- (void)showMessageMessage:(NSString *)message __attribute__((swift_name("showMessage(message:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkActions")))
@interface OMCNetworkActions : OMCKotlinEnum<OMCNetworkActions *> <OMCActionType>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) OMCNetworkActions *networkGet __attribute__((swift_name("networkGet")));
@property (class, readonly) OMCNetworkActions *networkPost __attribute__((swift_name("networkPost")));
@property (class, readonly) OMCNetworkActions *networkUpdateHeaders __attribute__((swift_name("networkUpdateHeaders")));
+ (OMCKotlinArray<OMCNetworkActions *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotificationsActions")))
@interface OMCNotificationsActions : OMCKotlinEnum<OMCNotificationsActions *> <OMCActionType>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) OMCNotificationsActions *notificationShowNotification __attribute__((swift_name("notificationShowNotification")));
@property (class, readonly) OMCNotificationsActions *notificationRegisterDevicePushToken __attribute__((swift_name("notificationRegisterDevicePushToken")));
@property (class, readonly) OMCNotificationsActions *notificationHandlePushMessage __attribute__((swift_name("notificationHandlePushMessage")));
@property (class, readonly) OMCNotificationsActions *notificationDeregisterDevicePushToken __attribute__((swift_name("notificationDeregisterDevicePushToken")));
+ (OMCKotlinArray<OMCNotificationsActions *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("OpenMobileActions")))
@interface OMCOpenMobileActions : OMCBase
@property (class, readonly, getter=companion) OMCOpenMobileActionsCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) id<OMCActionType> action __attribute__((swift_name("action")));
@property (readonly) OMCManagerType *manager __attribute__((swift_name("manager")));
@property (readonly) NSDictionary<id, id> * _Nullable parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenMobileActions.Companion")))
@interface OMCOpenMobileActionsCompanion : OMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OMCOpenMobileActionsCompanion *shared __attribute__((swift_name("shared")));
- (OMCOpenMobileActions * _Nullable)getActionLinkType:(NSString *)type parameters:(NSDictionary<id, id> * _Nullable)parameters __attribute__((swift_name("getActionLink(type:parameters:)")));
- (OMCOpenMobileActions * _Nullable)getByNameName:(NSString *)name __attribute__((swift_name("getByName(name:)")));
- (OMCOpenMobileActions * _Nullable)getByNameWithParametersName:(NSString *)name attributes:(NSDictionary<id, id> *)attributes __attribute__((swift_name("getByNameWithParameters(name:attributes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenMobileActions.NETWORK_GET")))
@interface OMCOpenMobileActionsNETWORK_GET : OMCOpenMobileActions
- (instancetype)initWithTag:(NSString *)tag parameters:(NSDictionary<id, id> *)parameters __attribute__((swift_name("init(tag:parameters:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<id, id> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (OMCOpenMobileActionsNETWORK_GET *)doCopyTag:(NSString *)tag parameters:(NSDictionary<id, id> *)parameters __attribute__((swift_name("doCopy(tag:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<id, id> *parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenMobileActions.NETWORK_POST")))
@interface OMCOpenMobileActionsNETWORK_POST : OMCOpenMobileActions
- (instancetype)initWithTag:(NSString *)tag parameters:(NSDictionary<id, id> *)parameters __attribute__((swift_name("init(tag:parameters:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<id, id> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (OMCOpenMobileActionsNETWORK_POST *)doCopyTag:(NSString *)tag parameters:(NSDictionary<id, id> *)parameters __attribute__((swift_name("doCopy(tag:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<id, id> *parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenMobileActions.NOTIFICATION_DEREGISTER_DEVICE_PUSH_TOKEN")))
@interface OMCOpenMobileActionsNOTIFICATION_DEREGISTER_DEVICE_PUSH_TOKEN : OMCOpenMobileActions
- (instancetype)initWithTag:(NSString *)tag parameters:(NSDictionary<id, id> *)parameters __attribute__((swift_name("init(tag:parameters:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<id, id> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (OMCOpenMobileActionsNOTIFICATION_DEREGISTER_DEVICE_PUSH_TOKEN *)doCopyTag:(NSString *)tag parameters:(NSDictionary<id, id> *)parameters __attribute__((swift_name("doCopy(tag:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<id, id> *parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenMobileActions.NOTIFICATION_HANDLE_PUSH_MESSAGE")))
@interface OMCOpenMobileActionsNOTIFICATION_HANDLE_PUSH_MESSAGE : OMCOpenMobileActions
- (instancetype)initWithTag:(NSString *)tag parameters:(NSDictionary<id, id> *)parameters __attribute__((swift_name("init(tag:parameters:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<id, id> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (OMCOpenMobileActionsNOTIFICATION_HANDLE_PUSH_MESSAGE *)doCopyTag:(NSString *)tag parameters:(NSDictionary<id, id> *)parameters __attribute__((swift_name("doCopy(tag:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<id, id> *parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenMobileActions.NOTIFICATION_REGISTER_DEVICE_PUSH_TOKEN")))
@interface OMCOpenMobileActionsNOTIFICATION_REGISTER_DEVICE_PUSH_TOKEN : OMCOpenMobileActions
- (instancetype)initWithTag:(NSString *)tag parameters:(NSDictionary<id, id> *)parameters __attribute__((swift_name("init(tag:parameters:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<id, id> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (OMCOpenMobileActionsNOTIFICATION_REGISTER_DEVICE_PUSH_TOKEN *)doCopyTag:(NSString *)tag parameters:(NSDictionary<id, id> *)parameters __attribute__((swift_name("doCopy(tag:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<id, id> *parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenMobileActions.NOTIFICATION_SHOW_NOTIFICATION")))
@interface OMCOpenMobileActionsNOTIFICATION_SHOW_NOTIFICATION : OMCOpenMobileActions
- (instancetype)initWithTag:(NSString *)tag parameters:(NSDictionary<id, id> *)parameters __attribute__((swift_name("init(tag:parameters:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<id, id> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (OMCOpenMobileActionsNOTIFICATION_SHOW_NOTIFICATION *)doCopyTag:(NSString *)tag parameters:(NSDictionary<id, id> *)parameters __attribute__((swift_name("doCopy(tag:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<id, id> *parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenMobileActions.UI_BUILD_INTENT")))
@interface OMCOpenMobileActionsUI_BUILD_INTENT : OMCOpenMobileActions
- (instancetype)initWithTag:(NSString *)tag parameters:(NSDictionary<id, id> *)parameters __attribute__((swift_name("init(tag:parameters:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<id, id> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (OMCOpenMobileActionsUI_BUILD_INTENT *)doCopyTag:(NSString *)tag parameters:(NSDictionary<id, id> *)parameters __attribute__((swift_name("doCopy(tag:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<id, id> *parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenMobileActions.UI_DISMISS_INTENT")))
@interface OMCOpenMobileActionsUI_DISMISS_INTENT : OMCOpenMobileActions
- (instancetype)initWithTag:(NSString *)tag __attribute__((swift_name("init(tag:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (OMCOpenMobileActionsUI_DISMISS_INTENT *)doCopyTag:(NSString *)tag __attribute__((swift_name("doCopy(tag:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenMobileActions.UI_LAUNCH_INTENT")))
@interface OMCOpenMobileActionsUI_LAUNCH_INTENT : OMCOpenMobileActions
- (instancetype)initWithTag:(NSString *)tag parameters:(NSDictionary<id, id> *)parameters __attribute__((swift_name("init(tag:parameters:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<id, id> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (OMCOpenMobileActionsUI_LAUNCH_INTENT *)doCopyTag:(NSString *)tag parameters:(NSDictionary<id, id> *)parameters __attribute__((swift_name("doCopy(tag:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<id, id> *parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenMobileActions.UI_OPEN_URL")))
@interface OMCOpenMobileActionsUI_OPEN_URL : OMCOpenMobileActions
- (instancetype)initWithTag:(NSString *)tag parameters:(NSDictionary<id, id> *)parameters __attribute__((swift_name("init(tag:parameters:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<id, id> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (OMCOpenMobileActionsUI_OPEN_URL *)doCopyTag:(NSString *)tag parameters:(NSDictionary<id, id> *)parameters __attribute__((swift_name("doCopy(tag:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<id, id> *parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenMobileActions.UI_SHOW_TOAST")))
@interface OMCOpenMobileActionsUI_SHOW_TOAST : OMCOpenMobileActions
- (instancetype)initWithTag:(NSString *)tag parameters:(NSDictionary<id, id> *)parameters __attribute__((swift_name("init(tag:parameters:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<id, id> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (OMCOpenMobileActionsUI_SHOW_TOAST *)doCopyTag:(NSString *)tag parameters:(NSDictionary<id, id> *)parameters __attribute__((swift_name("doCopy(tag:parameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<id, id> *parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UIActions")))
@interface OMCUIActions : OMCKotlinEnum<OMCUIActions *> <OMCActionType>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) OMCUIActions *uiLaunchIntent __attribute__((swift_name("uiLaunchIntent")));
@property (class, readonly) OMCUIActions *uiBuildIntent __attribute__((swift_name("uiBuildIntent")));
@property (class, readonly) OMCUIActions *uiDismissIntent __attribute__((swift_name("uiDismissIntent")));
@property (class, readonly) OMCUIActions *uiOpenUrl __attribute__((swift_name("uiOpenUrl")));
@property (class, readonly) OMCUIActions *uiShowToast __attribute__((swift_name("uiShowToast")));
+ (OMCKotlinArray<OMCUIActions *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface OMCKotlinThrowable : OMCBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(OMCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(OMCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (OMCKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) OMCKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface OMCKotlinEnumCompanion : OMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OMCKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface OMCKotlinArray<T> : OMCBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(OMCInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<OMCKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinException")))
@interface OMCKotlinException : OMCKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(OMCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(OMCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface OMCKotlinRuntimeException : OMCKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(OMCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(OMCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface OMCKotlinIllegalStateException : OMCKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(OMCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(OMCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface OMCKotlinCancellationException : OMCKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(OMCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(OMCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface OMCKtor_httpHttpMethod : OMCBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) OMCKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (OMCKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol OMCKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface OMCKtor_httpHttpMethodCompanion : OMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OMCKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (OMCKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<OMCKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) OMCKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) OMCKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) OMCKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) OMCKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) OMCKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) OMCKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) OMCKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
