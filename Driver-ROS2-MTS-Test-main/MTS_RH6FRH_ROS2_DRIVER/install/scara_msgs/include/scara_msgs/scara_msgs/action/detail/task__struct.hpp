// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from scara_msgs:action/Task.idl
// generated code does not contain a copyright notice

#ifndef SCARA_MSGS__ACTION__DETAIL__TASK__STRUCT_HPP_
#define SCARA_MSGS__ACTION__DETAIL__TASK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__scara_msgs__action__Task_Goal __attribute__((deprecated))
#else
# define DEPRECATED__scara_msgs__action__Task_Goal __declspec(deprecated)
#endif

namespace scara_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Task_Goal_
{
  using Type = Task_Goal_<ContainerAllocator>;

  explicit Task_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_number = 0l;
    }
  }

  explicit Task_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_number = 0l;
    }
  }

  // field types and members
  using _task_number_type =
    int32_t;
  _task_number_type task_number;

  // setters for named parameter idiom
  Type & set__task_number(
    const int32_t & _arg)
  {
    this->task_number = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scara_msgs::action::Task_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const scara_msgs::action::Task_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scara_msgs::action::Task_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scara_msgs::action::Task_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scara_msgs::action::Task_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scara_msgs::action::Task_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scara_msgs::action::Task_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scara_msgs::action::Task_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scara_msgs::action::Task_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scara_msgs::action::Task_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__scara_msgs__action__Task_Goal
    std::shared_ptr<scara_msgs::action::Task_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__scara_msgs__action__Task_Goal
    std::shared_ptr<scara_msgs::action::Task_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Task_Goal_ & other) const
  {
    if (this->task_number != other.task_number) {
      return false;
    }
    return true;
  }
  bool operator!=(const Task_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Task_Goal_

// alias to use template instance with default allocator
using Task_Goal =
  scara_msgs::action::Task_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace scara_msgs


#ifndef _WIN32
# define DEPRECATED__scara_msgs__action__Task_Result __attribute__((deprecated))
#else
# define DEPRECATED__scara_msgs__action__Task_Result __declspec(deprecated)
#endif

namespace scara_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Task_Result_
{
  using Type = Task_Result_<ContainerAllocator>;

  explicit Task_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit Task_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scara_msgs::action::Task_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const scara_msgs::action::Task_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scara_msgs::action::Task_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scara_msgs::action::Task_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scara_msgs::action::Task_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scara_msgs::action::Task_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scara_msgs::action::Task_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scara_msgs::action::Task_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scara_msgs::action::Task_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scara_msgs::action::Task_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__scara_msgs__action__Task_Result
    std::shared_ptr<scara_msgs::action::Task_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__scara_msgs__action__Task_Result
    std::shared_ptr<scara_msgs::action::Task_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Task_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const Task_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Task_Result_

// alias to use template instance with default allocator
using Task_Result =
  scara_msgs::action::Task_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace scara_msgs


#ifndef _WIN32
# define DEPRECATED__scara_msgs__action__Task_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__scara_msgs__action__Task_Feedback __declspec(deprecated)
#endif

namespace scara_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Task_Feedback_
{
  using Type = Task_Feedback_<ContainerAllocator>;

  explicit Task_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->percentage = 0l;
    }
  }

  explicit Task_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->percentage = 0l;
    }
  }

  // field types and members
  using _percentage_type =
    int32_t;
  _percentage_type percentage;

  // setters for named parameter idiom
  Type & set__percentage(
    const int32_t & _arg)
  {
    this->percentage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scara_msgs::action::Task_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const scara_msgs::action::Task_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scara_msgs::action::Task_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scara_msgs::action::Task_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scara_msgs::action::Task_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scara_msgs::action::Task_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scara_msgs::action::Task_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scara_msgs::action::Task_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scara_msgs::action::Task_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scara_msgs::action::Task_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__scara_msgs__action__Task_Feedback
    std::shared_ptr<scara_msgs::action::Task_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__scara_msgs__action__Task_Feedback
    std::shared_ptr<scara_msgs::action::Task_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Task_Feedback_ & other) const
  {
    if (this->percentage != other.percentage) {
      return false;
    }
    return true;
  }
  bool operator!=(const Task_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Task_Feedback_

// alias to use template instance with default allocator
using Task_Feedback =
  scara_msgs::action::Task_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace scara_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "scara_msgs/action/detail/task__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__scara_msgs__action__Task_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__scara_msgs__action__Task_SendGoal_Request __declspec(deprecated)
#endif

namespace scara_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Task_SendGoal_Request_
{
  using Type = Task_SendGoal_Request_<ContainerAllocator>;

  explicit Task_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Task_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    scara_msgs::action::Task_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const scara_msgs::action::Task_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scara_msgs::action::Task_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const scara_msgs::action::Task_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scara_msgs::action::Task_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scara_msgs::action::Task_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scara_msgs::action::Task_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scara_msgs::action::Task_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scara_msgs::action::Task_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scara_msgs::action::Task_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scara_msgs::action::Task_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scara_msgs::action::Task_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__scara_msgs__action__Task_SendGoal_Request
    std::shared_ptr<scara_msgs::action::Task_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__scara_msgs__action__Task_SendGoal_Request
    std::shared_ptr<scara_msgs::action::Task_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Task_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Task_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Task_SendGoal_Request_

// alias to use template instance with default allocator
using Task_SendGoal_Request =
  scara_msgs::action::Task_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace scara_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__scara_msgs__action__Task_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__scara_msgs__action__Task_SendGoal_Response __declspec(deprecated)
#endif

namespace scara_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Task_SendGoal_Response_
{
  using Type = Task_SendGoal_Response_<ContainerAllocator>;

  explicit Task_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Task_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scara_msgs::action::Task_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const scara_msgs::action::Task_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scara_msgs::action::Task_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scara_msgs::action::Task_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scara_msgs::action::Task_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scara_msgs::action::Task_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scara_msgs::action::Task_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scara_msgs::action::Task_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scara_msgs::action::Task_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scara_msgs::action::Task_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__scara_msgs__action__Task_SendGoal_Response
    std::shared_ptr<scara_msgs::action::Task_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__scara_msgs__action__Task_SendGoal_Response
    std::shared_ptr<scara_msgs::action::Task_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Task_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Task_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Task_SendGoal_Response_

// alias to use template instance with default allocator
using Task_SendGoal_Response =
  scara_msgs::action::Task_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace scara_msgs

namespace scara_msgs
{

namespace action
{

struct Task_SendGoal
{
  using Request = scara_msgs::action::Task_SendGoal_Request;
  using Response = scara_msgs::action::Task_SendGoal_Response;
};

}  // namespace action

}  // namespace scara_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__scara_msgs__action__Task_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__scara_msgs__action__Task_GetResult_Request __declspec(deprecated)
#endif

namespace scara_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Task_GetResult_Request_
{
  using Type = Task_GetResult_Request_<ContainerAllocator>;

  explicit Task_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Task_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scara_msgs::action::Task_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const scara_msgs::action::Task_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scara_msgs::action::Task_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scara_msgs::action::Task_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scara_msgs::action::Task_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scara_msgs::action::Task_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scara_msgs::action::Task_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scara_msgs::action::Task_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scara_msgs::action::Task_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scara_msgs::action::Task_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__scara_msgs__action__Task_GetResult_Request
    std::shared_ptr<scara_msgs::action::Task_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__scara_msgs__action__Task_GetResult_Request
    std::shared_ptr<scara_msgs::action::Task_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Task_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Task_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Task_GetResult_Request_

// alias to use template instance with default allocator
using Task_GetResult_Request =
  scara_msgs::action::Task_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace scara_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "scara_msgs/action/detail/task__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__scara_msgs__action__Task_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__scara_msgs__action__Task_GetResult_Response __declspec(deprecated)
#endif

namespace scara_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Task_GetResult_Response_
{
  using Type = Task_GetResult_Response_<ContainerAllocator>;

  explicit Task_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Task_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    scara_msgs::action::Task_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const scara_msgs::action::Task_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scara_msgs::action::Task_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const scara_msgs::action::Task_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scara_msgs::action::Task_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scara_msgs::action::Task_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scara_msgs::action::Task_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scara_msgs::action::Task_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scara_msgs::action::Task_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scara_msgs::action::Task_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scara_msgs::action::Task_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scara_msgs::action::Task_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__scara_msgs__action__Task_GetResult_Response
    std::shared_ptr<scara_msgs::action::Task_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__scara_msgs__action__Task_GetResult_Response
    std::shared_ptr<scara_msgs::action::Task_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Task_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Task_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Task_GetResult_Response_

// alias to use template instance with default allocator
using Task_GetResult_Response =
  scara_msgs::action::Task_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace scara_msgs

namespace scara_msgs
{

namespace action
{

struct Task_GetResult
{
  using Request = scara_msgs::action::Task_GetResult_Request;
  using Response = scara_msgs::action::Task_GetResult_Response;
};

}  // namespace action

}  // namespace scara_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "scara_msgs/action/detail/task__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__scara_msgs__action__Task_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__scara_msgs__action__Task_FeedbackMessage __declspec(deprecated)
#endif

namespace scara_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Task_FeedbackMessage_
{
  using Type = Task_FeedbackMessage_<ContainerAllocator>;

  explicit Task_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Task_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    scara_msgs::action::Task_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const scara_msgs::action::Task_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scara_msgs::action::Task_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const scara_msgs::action::Task_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scara_msgs::action::Task_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scara_msgs::action::Task_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scara_msgs::action::Task_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scara_msgs::action::Task_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scara_msgs::action::Task_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scara_msgs::action::Task_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scara_msgs::action::Task_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scara_msgs::action::Task_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__scara_msgs__action__Task_FeedbackMessage
    std::shared_ptr<scara_msgs::action::Task_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__scara_msgs__action__Task_FeedbackMessage
    std::shared_ptr<scara_msgs::action::Task_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Task_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Task_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Task_FeedbackMessage_

// alias to use template instance with default allocator
using Task_FeedbackMessage =
  scara_msgs::action::Task_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace scara_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace scara_msgs
{

namespace action
{

struct Task
{
  /// The goal message defined in the action definition.
  using Goal = scara_msgs::action::Task_Goal;
  /// The result message defined in the action definition.
  using Result = scara_msgs::action::Task_Result;
  /// The feedback message defined in the action definition.
  using Feedback = scara_msgs::action::Task_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = scara_msgs::action::Task_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = scara_msgs::action::Task_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = scara_msgs::action::Task_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Task Task;

}  // namespace action

}  // namespace scara_msgs

#endif  // SCARA_MSGS__ACTION__DETAIL__TASK__STRUCT_HPP_
